#include<stdio.h>
int main(){
    int a,b,gcd=1,min;
    long long int af=1,bf=1;
    scanf("%d %d",&a,&b);
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    for(int i=1;i<=min;i++){
        gcd=gcd*i;
    }
    printf("%d\n",gcd);
    return 0;
}