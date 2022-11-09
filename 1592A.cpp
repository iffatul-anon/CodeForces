#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,n,H,i,j,out,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>H;
        int a[n];
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n,greater<int>());
        sum=a[0]+a[1];
        if(a[0]>=H){
            out=1;
        }
        else{
            if(H%sum==0){
                out=(H/sum)+(H/sum);
            }
            else if(H%sum>a[0]){
                out=(H/sum)+(H/sum)+2;
            }
            else{
                out=(H/sum)+(H/sum)+1;
            }
        }
        cout<<out<<'\n';
    }
}