#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        for(int j=2;j<=n;j++){
            printf("%d ",j);
        }
        printf("1\n");
    }
    return 0;
}