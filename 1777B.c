#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int x=1;
        for(int i=1;i<=n;i++){
            x=(x*i)%1000000007;
        }
        x=(x*n)%1000000007;
        x=(x*(n-1))%1000000007;
        printf("%lld\n",x);
    }
}