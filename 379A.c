#include<stdio.h>
int main(){
    int a,b,x,y=0,z;
    scanf("%d%d",&a,&b);
    x=a/b;
    y=x;
    z=a%b;
    x=x+z;
    while(b<=x){   
        z=x%b;
        x=x/b;
        y=x+y;
        x=x+z;
    }
    printf("%d\n",a+y);
}