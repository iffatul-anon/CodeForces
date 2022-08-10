#include<stdio.h>
int main(){
    int n,i=4,j,k;
    scanf("%d",&n);
    int x1,x2,x3;
    anon:
    for(i=i;i<=n/2;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                x1=i;
                goto anon2;
            }
        }
    }
    anon2:
    x2=n-x1;
    for(k=2;k<=n/2;k++){
        if(x2%k==0){
            printf("%d %d\n",x1,x2);
            goto anon3;
        }
        
    }
    
    i++;
    goto anon;
    anon3:
    return 0;
}