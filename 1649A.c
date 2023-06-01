#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int flag1=0,flag2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                flag1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]==0){
                flag2=i+2;
                break;
            }
        }
        printf("%d\n",flag2-flag1);
    }
    return 0;
}