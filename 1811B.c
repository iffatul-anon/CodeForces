#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,x1,y1,x2,y2;
        scanf("%lld %lld %lld %lld %lld",&n,&x1,&y1,&x2,&y2);
        long long int m=n/2,a,b,c,d,x,y;
        if(x1<=m){
            a=m-x1+1;
        }
        else{
            a=x1-m;
        }
        if(y1<=m){
            b=m-y1+1;
        }
        else{
            b=y1-m;
        }
        if(x2<=m){
            c=m-x2+1;
        }
        else{
            c=x2-m;
        }
        if(y2<=m){
            d=m-y2+1;
        }
        else{
            d=y2-m;
        }
        if(a>b){
            x=a;
        }
        else{
            x=b;
        }
        if(c>d){
            y=c;
        }
        else{
            y=d;
        }
        printf("%lld\n",llabs(x-y));
    }
    return 0;
}