#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        int anon;
        cin>>anon;
        a[0]=anon;
        for(int j=1;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        for(int j=0;j<n;j++){
            if(anon<a[j]){
                int x=a[j]-anon;
                if(x%2==0){
                    anon=anon+(x/2);
                }
                else{
                    anon=anon+(x/2)+1;
                }
            }
        }
        cout<<anon<<endl;
    }
}