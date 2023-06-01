#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2!=0){
            printf("0\n");
        }
        else{
            long long int y=1,j;
            for(j=1;j<=n/2;j++){
                y=(y*j*j)%998244353;
            }
            printf("%lld\n",y);
        }
    }
}