#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n+n-1;
    int b=a-2;
    int sum=0;
    while(b>=1){
        sum=sum+b;
        b=b-2;
    }
    printf("%d\n",sum+sum+a);
    return 0;
}