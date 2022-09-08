#include<stdio.h>
int main(){
    int t,n,k1,k2;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&k1,&k2);
        int x;
        int max1=0;
        int max2=0;
        for(int j=0;j<k1;j++){
            scanf("%d",&x);
            if(max1<x){
                max1=x;
            }
        }
        for(int j=0;j<k2;j++){
            scanf("%d",&x);
            if(max2<x){
                max2=x;
            }
        }
        if(max1>max2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}