#include<stdio.h>
int main(){
    long long int t,n,m;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld",&n,&m);
        if(n==1){
            printf("0\n");
        }
        else if(n==2){
            printf("%lld\n",m);
        }
        else{
            printf("%lld\n",m*2);
        }
    }
    return 0;
}