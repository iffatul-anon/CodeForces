#include<stdio.h>
int main(){
    int t,n,a,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            sum=sum+a;
        }
        
        if(sum>=n){
            printf("%d\n",sum-n);
        }
        else{
            printf("1\n");
        }
    }
}