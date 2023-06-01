#include<stdio.h>
int main(){
    long long int n,m,anon,gcd=10000000000,sum=0;
    scanf("%lld %lld",&n,&m);
    long long int w[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&w[i]);
        sum=sum+w[i];
        if(gcd>w[i]){
            gcd=w[i];
        }
    }
    for(int i=0;i<n;i++){
        while(gcd!=w[i]){
            if(gcd > w[i]){
                if(gcd % w[i] == 0){
                    gcd=w[i];
                }
                else{
                    gcd = gcd % w[i];
                }
            }
            else{
                if(w[i] % gcd == 0){
                    w[i]=gcd;
                }
                else{
                    w[i] = w[i] % gcd;
                }
            }
        }
    }
    sum=sum/gcd;
    anon=m/sum;
    anon=anon*sum;
    printf("%lld\n",anon);
    return 0;
}