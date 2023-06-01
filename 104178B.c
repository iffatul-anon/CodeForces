#include<stdio.h>
int main(){
    long long int n,m,w,anon,gcd,sum=0;
    scanf("%lld %lld",&n,&m);
    scanf("%lld",&w);
    sum=w;
    gcd=w;
    for(int i=1;i<n;i++){
        scanf("%lld",&w);
        sum=sum+w;
        while(gcd!=w){
            if(gcd > w){
                if(gcd % w == 0){
                    gcd = w;
                }
                else{
                    gcd = gcd % w;
                }
            }
            else{
                if(w % gcd == 0){
                    w = gcd;
                }
                else{
                    w = w % gcd;
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