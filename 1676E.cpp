#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,q;
    for(int k=0;k<t;k++){
        long long sum=0;
    cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        a[i]=sum;
    }
    long long x;
    for(int j=0;j<q;j++){
        cin>>x;
        if(sum<x){
            cout<<"-1"<<endl;
        }
        else{
            int c;
            int l=0,h=n-1;
            while(l<=h){
                int m=(l+h)/2;
                if(a[m]==x){
                    c=m+1;
                    break;
                }
                else if(a[m]>x){
                    h=m-1;
                    c=h+2;
                }
                else if(a[m]<x){
                    l=m+1;
                }
            }
            
            cout<<c<<endl;
       }
        
       }
    }
}