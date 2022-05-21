#include<stdio.h>
int main (){
int n,i;
double p,sum=0,out;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%lf",&p);
    sum=sum+p;
}
out=sum/n;
printf("%lf\n",out);
    return 0;
}