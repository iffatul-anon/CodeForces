#include<stdio.h>
int main(){
    long long int n,n2,max,count=0;
    scanf("%lld",&n);
    while(n>0){
        count++;
        n2=n;
        max=0;
        while(n2>0){
            if(max<n2%10){
                max=n2%10;
            }
            n2=n2/10;
        }
        n=n-max;
    }
    printf("%lld\n",count);
    return 0;
}