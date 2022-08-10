#include<stdio.h>
int main(){
    int n,t,flag=0;
    scanf("%d %d",&n,&t);
    if(n==1 && t==10){
        printf("-1\n");
    }
    else if(t==10){
        for(int i=1;i<n;i++){
            printf("1");
        }
        printf("0");
    }
    else{
        for(int i=1;i<=n;i++){
            printf("%d",t);
        }
    }
    return 0;
}