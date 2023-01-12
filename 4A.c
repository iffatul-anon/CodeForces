#include<stdio.h>
int main (){
    int w;
    scanf("%d",&w);
    if(w>2){
        if(w%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }
    return 0;
}