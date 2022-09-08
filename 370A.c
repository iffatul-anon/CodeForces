#include<stdio.h>
#include<stdlib.h>
int main(){
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(r1==r2 || c1==c2){
        printf("1 ");
    }
    else{
        printf("2 ");
    }


    if(abs(r1-r2)==abs(c1-c2)){
        printf("1 ");
    }
    else if(abs(r1-r2)%2!=0 && abs(c1-c2)%2==0){
        printf("0 ");
    }
    else if(abs(r1-r2)%2==0 && abs(c1-c2)%2!=0){
        printf("0 ");
    }

    else{
        printf("2 ");
    }


    if(abs(r1-r2)>abs(c1-c2)){
        printf("%d\n",abs(r1-r2));
    }
    else{
        printf("%d\n",abs(c1-c2));
    }
 
    return 0;
}