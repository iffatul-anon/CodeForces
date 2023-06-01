#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,m;
        scanf("%lld %lld",&n,&m);
        long long int a[n][m],x=0;
        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<m;j++){
                scanf("%lld",&a[i][j]);
            }
        }
        long long int sum=0;
        for(long long int i=0;i<m;i++){
            int anon[n];
            for(long long int j=0;j<n;j++){
                anon[j]=a[j][i];
            }
            sort(anon,anon+n);
            long long int sum1=0;
            for(long long int j=n-1;j>0;j--){
                if(j==n-1){
                    sum1=(anon[j]-anon[j-1])*j;
                    continue;
                }
                sum1=sum1+((anon[j]-anon[j-1])*j*(n-j));
            }
            sum=sum+sum1;
        }
        printf("%lld\n",sum);
    }
    return 0;
}