#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i%4==0){
            printf("a");
        }
        if(i%4==1){
            printf("b");
        }
        if(i%4==2){
            printf("c");
        }
        if(i%4==3){
            printf("d");
        }
    }
    printf("\n");
    return 0;
}