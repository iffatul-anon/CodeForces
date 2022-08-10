#include<stdio.h>

int main(){

    int n,x,t,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    scanf("%d %d",&n,&x);
    a=1;

    if(n<2){
        printf("%d\n",a);
    }
    else{
        n=n-2;
       
        a=n/x;

        if(n%x==0){
            a=a-1;
        }
        a=a+2;

        printf("%d\n",a);

    }
    }
    return 0;
}