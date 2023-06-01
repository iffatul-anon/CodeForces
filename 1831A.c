#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            printf("%d ",n+1-a);
        }
        printf("\n");
    }
    return 0;
}