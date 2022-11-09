#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,q,m,i,j,tem;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    for(i=0;i<q;i++){
        cin>>m;
        for(j=n-1;j>=0;j--){
            if(a[j]<=m){
                break;
            }
        }
        cout<<j+1<<'\n';
    }
    return 0;
}