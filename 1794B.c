#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        if(a[0]==1){
            a[0]=2;
        }
        for(int i=1;i<n;i++){
            if(a[i]==1){
                a[i]=2;
            }
            if(a[i]%a[i-1]==0){
                a[i]++;
            }
        }
        for(int i=0;i<n;i++){
            printf("%lld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}