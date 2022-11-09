#include<iostream>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k;
    int a[n];
    int min=1000000000;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(min>a[i]){
            min=a[i];
        }
    }
    if(k==0 && min==1){
        cout<<"-1\n";
    }
    else if(k==0){
        cout<<min-1<<endl;
    }
    else{
    sort(a,a+n);
        if(a[k]==a[k-1]){
            cout<<"-1\n";
        }
        else{
            cout<<a[k-1]<<endl;
        }
    }
    return 0;
}