#include<stdio.h>
int main(){
    int t,n,m,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        int max=-1000000000,x,y;
        for(int j=1;j<=n;j++){
            for(int k=1;k<=m;k++){
                scanf("%d",&a);
                if(max<=a){
                    max=a;
                    x=j;
                    y=k;
                }
            }
        }
        if(n-x+1>x){
            x=n-x+1;
        }
        if(m-y+1>y){
            y=m-y+1;
        }
        printf("%d\n",x*y);
    }
    return 0;
}