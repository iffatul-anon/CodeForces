#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a,b,c;
        c=(n/3)-1;
        if(n%3==0){
            a=c+1;
            b=c+2;
        }
        if(n%3==1){
            a=c+1;
            b=c+3;
        }
        if(n%3==2){
            a=c+2;
            b=c+3;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}