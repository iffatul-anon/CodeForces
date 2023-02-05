#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int w,d,h;
        scanf("%d %d %d",&w,&d,&h);
        int a,b,f,g;
        scanf("%d %d %d %d",&a,&b,&f,&g);
        int x1,x2,x3,x4;
        x1=(b+g)+abs(a-f)+h;
        x2=(2*d)-(b+g)+abs(a-f)+h;
        x3=(a+f)+abs(b-g)+h;
        x4=(2*w)-(a+f)+abs(b-g)+h;
        if(x1<=x2 && x1<=x3 && x1<=x4){
            printf("%d\n",x1);
        }
        else if(x2<=x1 && x2<=x3 && x2<=x4){
            printf("%d\n",x2);
        }
        else if(x3<=x1 && x3<=x2 && x3<=x4){
            printf("%d\n",x3);
        }
        else if(x4<=x1 && x4<=x2 && x4<=x3){
            printf("%d\n",x4);
        }
    }
    return 0;
}