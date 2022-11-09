#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==0){
            int x=1,y=5;
            printf("%d\n",n/2);
            for(int j=1;j<=(n/2);j++){
                printf("%d %d\n",x,y);
                x=x+6;
                y=y+6;
            }
        }
        else{
            int x=1,y=5;
            printf("%d\n",(n+1)/2);
            for(int j=1;j<=((n+1)/2)-1;j++){
                printf("%d %d\n",x,y);
                x=x+6;
                y=y+6;
            }
            printf("%d %d\n",x,x+1);
        }
    }
    return 0;
}