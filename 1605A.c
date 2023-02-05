#include<stdio.h>
int main(){
    int t,a1,a2,a3;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a1,&a2,&a3);
        if((a1+a3-2*a2)%3==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}