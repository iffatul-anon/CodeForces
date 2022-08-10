#include<stdio.h>
int main(){

    long long int n,f;

    scanf("%lld",&n);

    f=(n/2)-(n*(n%2));

    printf("%lld\n",f);
    
    return 0;
}