#include<stdio.h>
int main(){
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int x,y,z;
    if(n<=m){
        x=n*a;
        if(x<b){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",b);
        }
    }
    else{
        x=n*a;
        if(n%m==0){
            y=(n/m)*b;
            z=(n/m)*b;
        }
        else{
            y=((n/m)*b)+((n%m)*a);
            z=((n/m)+1)*b;
        }
        if(x<=y && x<=z){
            printf("%d\n",x);
        }
        else if(y<=x && y<=z){
            printf("%d\n",y);
        }
        else if(z<=x && z<=y){
            printf("%d\n",z);
        }
    }
    return 0;
}