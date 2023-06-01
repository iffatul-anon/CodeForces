#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",abs(x-y)*2);
        if(x<y){
            for(int i=x;i<y;i++){
                printf("%d ",i);
            }
            for(int i=y;i>x;i--){
                printf("%d ",i);
            }
        }
        else {
            for(int i=y;i<x;i++){
                printf("%d ",i);
            }
            for(int i=x;i>y;i--){
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}