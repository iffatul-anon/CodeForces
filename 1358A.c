#include<stdio.h>
int main(){
int t,n,m,i,a,x,y;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d %d",&n,&m);
    a=n*m;
    if(a>1){
    if(a%2==0){
        x=a/2;
    }
    else{
        y=a+1;
        x=y/2;
    }
    printf("%d\n",x);
    }
    else{
        printf("1\n");
    }
}
    return 0;
}