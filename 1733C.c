#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        printf("%d\n",n-1);
        if(n!=1) printf("1 %d\n",n);
        for(int i=1;i<n-1;i++){
            if(a[i]%2!=a[0]%2) printf("1 %d\n",i+1);
            else printf("%d %d\n",i+1,n);
        }
    }
}