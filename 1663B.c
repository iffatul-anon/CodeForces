#include<stdio.h>
#include<string.h>
int main(){
    int r;
    scanf("%d",&r);
    if(r<1200){
        printf("1200\n");
    }
    else if(r<1400){
        printf("1400\n");
    }
    else if(r<1600){
        printf("1600\n");
    }
    else if(r<1900){
        printf("1900\n");
    }
    else if(r<2100){
        printf("2100\n");
    }
    else if(r<2300){
        printf("2300\n");
    }
    else if(r<2400){
        printf("2400\n");
    }
    else if(r<2600){
        printf("2600\n");
    }
    else{
        printf("3000\n");
    }
    return 0;
}