#include<stdio.h>
int main(){
    int m,count,n,x;
    scanf("%d",&m);
    n=m*5;
    x=n;
    anon:
    count=0;
    while(x>=5){
        count=count+(x/5);
        x=x/5;
    }
    if(count==m){
        printf("5\n");
        printf("%d %d %d %d %d\n",n,n+1,n+2,n+3,n+4);
    }
    else if(count<m){
        printf("0\n");
    }
    else{
        n=n-5;
        x=n;
        goto anon;
    }
    return 0;
}