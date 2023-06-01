#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        long long int x=a[0],y=0;
        int l=1,h=n-1,flag=0;
    
        while(l<h){
            x=x+a[l];
            y=y+a[h];
            l++;
            h--;
            if(x<y){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}