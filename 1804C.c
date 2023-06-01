#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,x,p,b=1,c;
        scanf("%lld %lld %lld",&n,&x,&p);
        while(b<=p && b<=n*2){
            c=x+(b*(b+1))/2;
            if(c%n==0){
                break;
            }
            b++;
        }
        if(c%n==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}