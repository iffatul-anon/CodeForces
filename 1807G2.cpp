#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int c[n],a[n];
        long long int sum=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&c[i]);
        }
        sort(c,c+n);
        int flag=0;
        for(int i=0;i<n;i++){
            sum=sum+c[i];
            a[i]=sum;
        }
        for(int i=1;i<n;i++){
            if(a[i-1]<c[i]){
                flag=1;
                break;
            }
        }
        if(flag==1 || c[0]!=1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}