#include<stdio.h>
#include<math.h>
int main(){
    long long int t,n;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++){
        scanf("%lld",&n);
        long long int a[n];
        long long int count=0,count1=0;
        for(long long int j=0;j<n;j++){
            scanf("%lld",&a[j]);
            if(a[j]==1){
                count1++;
            }
            if(a[j]==0){
                count++;
            }
        }
        long long int ans= pow(2,count)*count1;
        printf("%lld\n",ans);
    }
    return 0;
}