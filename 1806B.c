#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a==0){
                x++;
            }
            if(a==1){
                y++;
            }
        }
        if(x<=(n+1)/2){
            printf("0\n");
        }
        else if(x==n || x+y<n){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
    return 0;
}