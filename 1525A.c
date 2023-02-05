#include<stdio.h>
int main(){
    int t,n,k,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        n=100-k;
        if(k==100){
            printf("1\n");
        }
        else if(n>k){
            for(j=k;j>0;j--){
                if(n%j==0 && k%j==0){
                    break;
                }
            }
            printf("%d\n",k/j+n/j);
        }
        else{
            for(j=n;j>0;j--){
                if(n%j==0 && k%j==0){
                    break;
                }
            }
            printf("%d\n",k/j+n/j);
        }
    }
    return 0;
}