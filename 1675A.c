#include<stdio.h>
int main(){
    int t,a,b,c,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
        if(x<=a && y<=b){
            printf("Yes\n");
        }
        else if(c==0 && x<a){
            printf("No\n");
        }
        else if(c==0 && y<b){
            printf("No\n");
        }
        else if(x<=a && y<=(b+c)){
            printf("Yes\n");
        }
        else if(y<=b && x<=(a+c)){
            printf("Yes\n");
        }
        else if(x>a && y>b){
            int ax=x-a;
            int by=y-b;
            if(ax+by<=c){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            printf("No\n");
        }
    }
}