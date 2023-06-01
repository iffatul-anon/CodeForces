#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,k;
        scanf("%d %d",&x,&k);
        if(x%k!=0){
            printf("1\n%d\n",x);
        }
        else{
            printf("2\n1 %d\n",x-1);
        }
    }
}