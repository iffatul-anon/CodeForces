#include<stdio.h>
int main(){
    double n,p,sum=0;
    scanf("%lf",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&p);
        sum=sum+p;
    }
    printf("%f\n",sum/n);//%lf hobe na
    return 0;
}