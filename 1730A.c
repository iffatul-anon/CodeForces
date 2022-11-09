#include<stdio.h>
int main(){
    int t,n,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&c);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int sum=0;
        for(int j=0;j<n;j++){
            int count=1;
            for(int k=j+1;k<n;k++){
                if(a[j]==a[k]){
                    count++;
                    a[k]=a[n-1];
                    k--;
                    n--;
                }
            }
            if(count>c){
                sum=sum+c;
            }
            else{
                sum=sum+count;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}