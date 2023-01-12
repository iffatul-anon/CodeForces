#include<stdio.h>
int main(){
    long long int h,l;
    scanf("%lld %lld",&h,&l);
    long double x=((l*l)-(h*h))/((2*h)*1.0);
    printf("%.13Lf\n",x);
    return 0;
}