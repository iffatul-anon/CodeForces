#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,m;
        scanf("%lld %lld",&n,&m);
        long long int a[n*m];
        for(int i=0;i<n*m;i++){
            scanf("%lld",&a[i]);
        }
        sort(a,a+(n*m));
        int tem;
        m>n?tem=n,n=m,m=tem:0;
        long long int sum1=((a[(n*m)-1]-a[0])*(n-1)*m)+((a[(n*m)-1]-a[1])*(m-1));
        long long int sum2=((a[(n*m)-1]-a[0])*(n-1)*m)+((a[(n*m)-2]-a[0])*(m-1));
        printf("%lld\n",sum1>sum2?sum1:sum2);
    }
    return 0;
}