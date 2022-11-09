#include<stdio.h>
int main(){
    int x,count=1;
    scanf("%d",&x);
    while(x!=1){
        if(x%2!=0){
            x--;
            count++;
        }
        x=x/2;
    }
    printf("%d\n",count);
    return 0;
}