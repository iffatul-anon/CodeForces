#include<stdio.h>
int main(){
    long long int n,k,a;
    scanf("%lld %lld",&n,&k);
        a=n/k;
        if(a%2==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    return 0;
}