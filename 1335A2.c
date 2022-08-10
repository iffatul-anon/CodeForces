#include<stdio.h>
int main(){
int t,n,a,b,i,c;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d",&n);
    c=0;
    if(n>2){
        if(n%2==0)
        for(b=1;b<n;b++){
            a=n-b;
            if(a>b){
                c=c+1;
            }
            else{
                goto aa;
            }
        }
    }
    aa:
    printf("%d\n",c);
}
    return 0;
}