#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int sum=0;
    if(a+b<=c){
        sum=c-a-b+1;
    }
    else if(a+c<=b){
        sum=b-a-c+1;
    }
    else if(b+c<=a){
        sum=a-b-c+1;
    }
    printf("%d\n",sum);
    return 0;
}