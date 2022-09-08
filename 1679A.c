#include<stdio.h>
int main(){
    long long int t,n,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&n);
        if(n<4){
            printf("-1\n");
        }
        else{
        if(n%6==0){
            printf("%lld ",n/6);
        }
        else if(n%6==4 || n%6==2){
            printf("%lld ",(n/6)+1);
        }
        if(n%4==0 || n%4==2){
            printf("%lld\n",n/4);
        }
        else{
            printf("-1\n");
        }
        }
    }
    return 0;
}