#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        int b[100001]={0};
        int count=0,flag=-1;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==a[i-1]){
                b[a[i]]--;
            }
            else if(a[i]<a[i-1]){
                flag=i;
                break;
            }
            else if(a[i]>a[i-1] && b[a[i]]>1){
                flag=i;
                break;
            }
        }
        for(int i=0;i<flag;i++){
            if(b[a[i]]>0){
                count++;
                b[a[i]]=0;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}