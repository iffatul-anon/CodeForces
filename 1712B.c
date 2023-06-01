#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            for(int i=1;i<n;i=i+2){
                printf("%d %d ",i+1,i);
            }
        }
        else{
            printf("1 ");
            for(int i=2;i<n;i=i+2){
                printf("%d %d ",i+1,i);
            }
        }
        printf("\n");
    }
    return 0;
}