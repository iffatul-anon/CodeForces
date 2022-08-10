#include<stdio.h>
int main(){
int t,a,b,i,n,n2,c;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d %d",&a,&b);
    if(b>=a){
        printf("%d\n",b-a);
    }
    else{
    c=1;
    n=b;
    while(n<a){
        n=b*c;
        c++;
        if(n>=a){
            n2=n-a;
            goto anon;
        }
    }
    anon:
    printf("%d\n",n2);
}
}
    return 0;
}