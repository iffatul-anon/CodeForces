#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int x=n-a;
    if(x>b){
        printf("%d\n",b+1);
    }
    else{
        printf("%d\n",x);
    }
    return 0;
}