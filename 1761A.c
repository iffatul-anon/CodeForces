#include<stdio.h>
int main(){
    int t,n,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&a,&b);
        if(n==a && n==b){
            printf("Yes\n");
        }
        else if(n==2 || n==3){
            printf("No\n");
        }
        else{
            if((n-a-b)>=2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    return 0;
}