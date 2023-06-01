#include<iostream>
#include<algorithm>
using namespace std;
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
        sort(a,a+n);
        long long int x,y;
        x=a[n-2]*a[n-1];
        y=a[0]*a[1];
        if(x>y){
            printf("%lld\n",x);
        }
        else{
            printf("%lld\n",y);
        }
    }
    return 0;
}