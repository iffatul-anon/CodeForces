#include<stdio.h>
int main(){
int t,a,b,i,n,n2,c;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d %d",&a,&b);
    n=0;
    for(c=1;c<=b;c++){
        n=b*c;
        if(n>=a){
            n2=n-a;
            goto aaa;
        }
    }
    aaa:
    printf("%d\n",n2);
}
    return 0;
}