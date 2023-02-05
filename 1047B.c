#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x,y;
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(max<x+y){
            max=x+y;
        }
    }
    printf("%d\n",max);
    return 0;
}