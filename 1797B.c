#include<stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        long long int a[n][n];
        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<n;j++){
                scanf("%lld",&a[i][j]);
            }
        }
        long long int count=0;
        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<n;j++){
                if(a[i][j]!=a[n-1-i][n-j-1]){
                    count++;
                }
            }
        }
        count=count/2;
        if((count<=k && ((k-count)%2==0 || n%2!=0))){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}