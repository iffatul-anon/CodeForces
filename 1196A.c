#include<stdio.h>
int main(){
    long long int q,a,b,c;
    scanf("%lld",&q);
    for (int i=0;i<q;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        long long int sum=a+b+c;
        if(sum%2==0){
            printf("%lld\n",sum/2);
        }
        else{
            printf("%lld\n",sum/2);
        }
    }
    return 0;
}