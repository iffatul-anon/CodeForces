#include<stdio.h>
int main(){
int t,a,b,i,c,d,e;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d %d",&a,&b);
    c=0;
    d=0;
    e=0;
    if(a>b){
        c=a-b;
        if(c>10){
            d=c%10;
            if(d==0){
                e=c/10;
            }
            else{
                e=(c/10)+1;
            }
        }
        else{
            e=1;
        }
    }
    else if(b>a){
        c=b-a;
        if(c>10){
            d=c%10;
            if(d==0){
                e=c/10;
            }
            else{
                e=(c/10)+1;
            }
        }
        else{
            e=1;
        }

    }
        printf("%d\n",e);
}
    return 0;
}