#include<stdio.h>
int main(){
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    if(m==1){
        printf("%lld\n",n-1);
    }
    else{
        printf("%lld\n",(m-1)*n);
    }
    return 0;
}