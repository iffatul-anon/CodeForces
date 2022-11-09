#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],sum=0;
    int b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        c[i]=b[i];
        sum=sum+a[i];
    }
    sort(c,c+n);
    int x=c[n-1];
    int y=c[n-2];
    for(int i=0;i<n;i++){
        if(b[i]==x){
            cout<<(sum-a[i])*y<<" ";
        }
        else{
            cout<<(sum-a[i])*x<<" ";
        }
    }
    return 0;
}