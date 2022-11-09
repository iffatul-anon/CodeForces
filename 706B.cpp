#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,q,m,i,j,tem;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    for(i=0;i<q;i++){
        cin>>m;
        int l=0,h=n-1,mid;
        while(l<h){
            mid=(l+h)/2;
            if(a[mid]>m){
                h=mid-1;
            }
            else if(a[mid]<m){
                l=mid+1;
            }
            else if(a[mid]==m){
                l=mid+1;
            }
        }
        for(j=h;j>=0;j--){
            if(a[j]<=m){
                break;
            }
        }
        cout<<j+1<<'\n';
    }
    return 0;
}