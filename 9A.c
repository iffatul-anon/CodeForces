#include<stdio.h>
int main(){
    int y,w,x;
    scanf("%d %d",&y,&w);
    if(y>w){
        x=y;
    }
    else{
        x=w;
    }
    if(x==1){
        printf("1/1\n");
    }
    else if(x==2){
        printf("5/6\n");
    }
    else if(x==3){
        printf("2/3\n");
    }
    else if(x==4){
        printf("1/2\n");
    }
    else if(x==5){
        printf("1/3\n");
    }
    else if(x==6){
        printf("1/6\n");
    }
    return 0;
}