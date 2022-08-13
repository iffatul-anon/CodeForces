#include<stdio.h>
int main(){
    int a,b,x,n,m;
    scanf("%d %d",&a,&b);
    if(a>b){
        n=b;
        x=a-b;
        m=x/2;
    }
    else{
        n=a;
        x=b-a;
        m=x/2;
    }
   
    printf("%d %d\n",n,m);
}