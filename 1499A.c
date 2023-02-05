#include<stdio.h>
int main(){
    int t,n,k1,k2,w,b,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d %d",&n,&k1,&k2,&w,&b);
        if(k1<k2){
            x=k1+(k2-k1)/2;
            y=n-k2+(k2-k1)/2;
        }
        else{
            x=k2+(k1-k2)/2;
            y=n-k1+(k1-k2)/2;
        }
        if(x>=w && y>=b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}