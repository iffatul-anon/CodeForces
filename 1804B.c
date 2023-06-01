#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,k,d,w;
        scanf("%lld %lld %lld %lld",&n,&k,&d,&w);
        long long int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        int count=0,count1=0;
        int i=0,j;
        while(i<n){
            count++;
            if(i==n-1){
                break;
            }
            j=i;
            while(a[j]-a[i]<=(d+w)){
                j++;
                if(j-i==k){
                    break;
                }
            }
            i=j;
        }
        printf("%d\n",count);
    }
    return 0;
}