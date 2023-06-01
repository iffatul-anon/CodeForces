#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        if(n%2==0){
            printf("1 %lld\n",n/2);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}