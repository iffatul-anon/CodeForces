#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        if((n==3 && m==3) || (n==3 && m==2) ||(n==2 && m==3)){
            printf("2 2\n");
        }
        else{
            printf("1 1\n");
        }
    }
    return 0;
}