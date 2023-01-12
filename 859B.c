#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=sqrt(n);
    if(x*x==n){
        printf("%d\n",4*x);
    }
    else{
        int y=x*x;
        int z=n-y;
        if(z<=x){
            printf("%d\n",4*x+2);
        }
        else{
            printf("%d\n",4*x+4);
        }
    }
    return 0;
}