#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long int n;
        scanf("%llu",&n);
        printf("%llu\n",(n*5)+((n-2)*(n-1)));
    }
    return 0;
}