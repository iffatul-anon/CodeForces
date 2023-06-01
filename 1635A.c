#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long long int a,b;
        scanf("%lld",&b);
        for(int i=1;i<n;i++){
            scanf("%lld",&a);
            b=a|b;
        }
        printf("%lld\n",b);
    }
    return 0;
}