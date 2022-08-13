#include<stdio.h>
int main(){
    int t,x,y,n,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&n);
        a=n/x;
        b=(x*a)+y;
        if(b>n){
            b=b-x;
        }
        printf("%d\n",b);
        /*for(int i=n;i>=0;i--){
            if(i%x==y){
                printf("%d\n",i);
                break;
            }

        }*/
    }
  
   
}