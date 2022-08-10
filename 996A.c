#include<stdio.h>
int main(){
    int n,b=0,b1=0,b5=0,b10=0,b20=0,b100=0;
    scanf("%d",&n);
    if(n>=100){
        b100=n/100;
        n=n%100;
    }
    if(n>=20 && n<100){
        b20=n/20;
        n=n%20;
    }
    if(n>=10 && n<20){
        b10=n/10;
        n=n%10;
    }
    if(n>=5 && n<10){
        b5=n/5;
        n=n%5;
    }
    if(n>=1 && n<5){
        b1=n/1;
    }
    b=b1+b5+b10+b20+b100;
    printf("%d\n",b);

    return 0;
}