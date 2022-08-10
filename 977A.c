#include<stdio.h>
int main (){
    int n,k,m,i=1;
    scanf("%d %d",&n,&k);
    anon:
    while(k>0){
        if(n%10==0){
            n=n/10;
            k--;
            goto anon;
        }
        else if(n%10!=0){
            n=n-1;
            k--;
            goto anon;
        }
    }
    printf("%d\n",n);
    return 0;
}