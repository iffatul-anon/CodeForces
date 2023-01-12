#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n==1){
            printf("-1\n");
        }
        else{
            printf("2");
            for(int j=1;j<n;j++){
                printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}