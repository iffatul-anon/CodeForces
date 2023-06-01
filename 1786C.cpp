#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        sort(a,a+n);
        long long int count=0,x=1;
        for(int j=0;j<n;j++){
            if(a[j]>=x){
                count=count+a[j]-x++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}