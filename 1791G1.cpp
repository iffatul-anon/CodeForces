#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>c;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
            a[j]=a[j]+j+1;
        }
        sort(a,a+n);
        int j;
        for(j=0;j<n;j++){
            c=c-a[j];
            if(c<0){
                break;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}