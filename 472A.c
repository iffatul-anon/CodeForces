#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int x1,x2,x3;
    for(i=4;i<=n/2;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                x1=i;
                x2=n-x1;
                for(k=2;k<=n/2;k++){
                    if(x2%k==0){
                        printf("%d %d\n",x1,x2);
                        goto anon;
                    }
                }
            }
        }
    }
    anon:
    return 0;
}