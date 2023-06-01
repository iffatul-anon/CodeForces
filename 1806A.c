#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        long long x,y,z;
        y=d-b;
        z=a+y;
        x=z-c;
        if(b>d || z<c){
            printf("-1\n");
        }
        else{
            printf("%lld\n",llabs(x)+llabs(y));
        }
    }
    return 0;
}