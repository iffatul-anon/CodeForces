#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int x=1,y=3*n;
        printf("%d\n",(n+1)/2);
        for(int j=1;j<=(n+1)/2;j++){
            printf("%d %d\n",x,y);
            x=x+3;
            y=y-3;
        }
    }
    return 0;
}