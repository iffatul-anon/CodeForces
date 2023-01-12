#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int flag=0;
    for(int i=0;i<n-2;i++){
        if(a[i]+a[i+1]>a[i+2] && a[i]+a[i+2]>a[i+1] && a[i+1]+a[i+2]>a[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
}