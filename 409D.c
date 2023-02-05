#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1 || n==4 || n==6 || n==8 || n==9 || n==10 || n==13 | n==15){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}