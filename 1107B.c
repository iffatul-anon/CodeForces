#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        long long int k,x;
        scanf("%lld %lld",&k,&x);
        printf("%lld\n",(k-1)*9+x);
    }
    return 0;
}