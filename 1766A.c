#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n<10){
            printf("%d\n",n);
        }
        else if(n<100){
            n=n/10;
            n=n+9;
            printf("%d\n",n);
        }
        else if(n<1000){
            n=n/100;
            n=n+18;
            printf("%d\n",n);
        }
        else if(n<10000){
            n=n/1000;
            n=n+27;
            printf("%d\n",n);
        }
        else if(n<100000){
            n=n/10000;
            n=n+36;
            printf("%d\n",n);
        }
        else if(n<1000000){
            n=n/100000;
            n=n+45;
            printf("%d\n",n);
        }
    }
    return 0;
}