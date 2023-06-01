#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==1){
            printf("1\n");
        }
        else if(n%2!=0){
            printf("-1\n");
        }
        else{
            int x=2,y=1;
            for(int i=0;i<n;i++){
                if(i%2==0){
                    printf("%d ",x);
                    x=x+2;
                }
                else{
                    printf("%d ",y);
                    y=y+2;
                }
            }
            printf("\n");
        }
    }
    return 0;
}