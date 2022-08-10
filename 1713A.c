#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int x,y;
        int a=0,b=0;
        int min1=0,min2=0,max1=0,max2=0;
        for(int j=0;j<n;j++){
            scanf("%d %d",&x,&y);
            if(x<0){
                if(min1>x){
                    min1=x;
                }
            }
            else{
               if(max1<x){
                max1=x;
               }
            }
            if(y<0){
                if(min2>y){
                    min2=y;
                }
            }
            else{
                if(max2<y){
                    max2=y;
                }
            }
        }
        min1=-(min1);
        min2=-(min2);
        a=(min1*2)+(max1*2);
        b=(min2*2)+(max2*2);
        printf("%d\n",a+b);
    }
    return 0;
}