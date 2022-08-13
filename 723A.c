#include<stdio.h>
int main(){
    int x1,x2,x3,n,m;
    scanf("%d %d %d",&x1,&x2,&x3);
    if(x1>x2 && x1>x3){
        if(x3<x2){
            n=x1-x2;
            m=x2-x3;
        }
        else if (x2<x3){
            n=x1-x3;
            m=x3-x2;
        }
    }
    else if(x2>x1 && x2>x3){
        if(x3<x1){
            n=x2-x1;
            m=x1-x3;
        }
        else if(x1<x3){
            n=x2-x3;
            m=x3-x1;
        }
    }
    else if(x3>x1 && x3>x2){
        if(x2<x1){
            n=x3-x1;
            m=x1-x2;
        }
        else if(x1<x2){
            n=x3-x2;
            m=x2-x1;
        }
    }
    
    printf("%d\n",n+m);
}