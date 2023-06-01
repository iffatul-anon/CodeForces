#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        if(n%2==0 || k%2!=0 || n%k==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}