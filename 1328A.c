#include<stdio.h>
int main(){
int t,a,b,i,n;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d %d",&a,&b);
    n=1;
    if(a%b==0){
        printf("0\n");
    }
    else{
        aa:
        a=a+1;
        if(a%b==0){
            printf("%d\n",n);
        }
        else{
            n=n+1;
            goto aa;
        }
    }
 
}
 
    return 0;
}