#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n,m,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        m=n;
        map<int,int>a;
        for(int j=0;j<n;j++){
            cin>>x;
            a[x]++;
        }
        int max=0;
        for(auto it : a){
            if(max<it.second){
                max=it.second;
            }
        }
        int op=0;
        while(max<m){
            op++;
            if(max<=(m/2)){
                op=op+max;
            }
            else{
                op=op+(m-max);
            }
            max=max*2;
        }
        cout<<op<<"\n";
    }
    return 0;
}