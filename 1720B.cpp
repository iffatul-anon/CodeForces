#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        cout<<(a[n-1]-a[0])+(a[n-2]-a[1])<<'\n';
    }
    return 0;
}