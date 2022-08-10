#include<stdio.h>
int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int n2;
    long long int sum1=-1,sum2=0;
    if(n%2==0){
        n2=n/2;
        if(k>n2){
            k=k-n2;
            for(int i=1;i<=k;i++){
                sum2=sum2+2;
            }
            printf("%lld\n",sum2);
        }
        else{
            for(int i=1;i<=k;i++){
                sum1=sum1+2;
            }
            printf("%lld\n",sum1);
        }
    }
    else{
        n2=(n/2)+1;
        if(k>n2){
            k=k-n2;
            for(int i=1;i<=k;i++){
                sum2=sum2+2;
            }
            printf("%lld\n",sum2);
        }
        else{
            for(int i=1;i<=k;i++){
                sum1=sum1+2;
            }
            printf("%lld\n",sum1);
        }
    }
   
    return 0;
}