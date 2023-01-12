#include<stdio.h>
int main(){
    int t,r,g,b,w;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&r,&g,&b,&w);
        int count=0;
        if(r%2!=0){
            count++;
        }
        if(g%2!=0){
            count++;
        }
        if(b%2!=0){
            count++;
        }
        if(w%2!=0){
            count++;
        }
        if(count<2){
            printf("Yes\n");
        }
        else if(r==0 || g==0 || b==0){
            printf("No\n");
        }
        else{
            count=0;
        if((r-1)%2!=0){
            count++;
        }
        if((g-1)%2!=0){
            count++;
        }
        if((b-1)%2!=0){
            count++;
        }
        if((w+3)%2!=0){
            count++;
        }
        if(count<2){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        }
    }
    return 0;
}