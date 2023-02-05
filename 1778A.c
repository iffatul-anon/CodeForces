#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        int flag1=0,flag2=0;
        for(int j=0;j<n;j++){
            if(a[j]==-1){
                flag1=1;
            }
            if(a[j]==-1 && a[j+1]==-1){
                flag2=1;
            }
        }
        if(flag1==0){
            printf("%d\n",sum-4);
        }
        else if(flag2==0){
            printf("%d\n",sum);
        }
        else {
            printf("%d\n",sum+4);
        }
    }
    return 0;
}