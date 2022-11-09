#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int max=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(max<a[j]){
                max=a[j];
            }
        }
        int flag=0;
        for(int j=0;j<n;j++){
            if((max-a[j])%2!=0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}