#include<stdio.h>
#include<math.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        n=sqrtl(n-1);
        printf("%lld\n",n);
    }
    return 0;
}