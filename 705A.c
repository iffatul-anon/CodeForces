#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("I hate it\n");
    }
    else if(n==2){
        printf("I hate that I love it\n");
    }
    else{
        printf("I hate that ");
    for(int i=2;i<n;i++){
        if(i%2!=0){
            printf("I hate that ");
        }
        else if(i%2==0){
            printf("I love that ");
        }
    }
    if(n%2==0){
        printf("I love it\n");
    }
    else{
        printf("I hate it\n");
    }
    }
    return 0; 
}