#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        long long int k[n];
        long long int a[m],b[m],c[m];
        for(int i=0;i<n;i++){
            scanf("%lld",&k[i]);
        }
        for(int i=0;i<m;i++){
            scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);
        }
        sort(k, k+n);
        for(int i=0;i<m;i++){
            int flag=0;
            int low=0,high=n-1,mid;
            while(low<=high){
                mid=low+((high-low)/2);
                long long int x=b[i]-k[mid];
                if(((x*x)-(4*a[i]*c[i]))<0){
                    flag=1;
                    break;
                }
                if(b[i]<k[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(flag==1){
                printf("YES\n");
                printf("%lld\n",k[mid]);
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
