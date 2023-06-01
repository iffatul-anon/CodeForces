#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n/2;i++){
            printf("%d %d ",a[i],a[n-i-1]);
        }
        if(n%2!=0){
            printf("%d",a[n/2]);
        }
        printf("\n");
    }
    return 0;
}