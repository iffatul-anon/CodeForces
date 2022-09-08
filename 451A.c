#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n<=m){
        if(n%2==0){
            printf("Malvika\n");
        }
        else{
            printf("Akshat\n");
        }
    }
    else{
        if(m%2==0){
            printf("Malvika\n");
        }
        else{
            printf("Akshat\n");
        }
    }
}