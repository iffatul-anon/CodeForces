#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,n1,n2,r;
        scanf("%lld %lld",&a,&b);
        printf("2\n");
        printf("1 %lld\n",b-1);
        printf("%lld %lld\n",a,b);
    }
    return 0;
}