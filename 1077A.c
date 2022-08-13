#include<stdio.h>
int main(){
    int t;
    long long int a,b,k,x,a1,b1;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k%2==0){
            a1=k/2;
            b1=k/2;
        }
        else{
            a1=(k/2)+1;
            b1=k/2;
        }
        x=(a*a1)-(b*b1);
        printf("%lld\n",x);
    }
    return 0;
}