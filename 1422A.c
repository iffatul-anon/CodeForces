#include<stdio.h>
int main(){
    int t,a,b,c,d;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>=b && a>=c){
            d=a;
        }
        else if(b>=c && b>=a){
            d=b;
        }
        else{
            d=c;
        }
        printf("%d\n",d);
    }
    return 0;
}