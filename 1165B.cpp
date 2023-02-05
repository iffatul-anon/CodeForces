#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int n,x,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count=1;
    for(i=0;i<n;i++){
        if(a[i]>=count){
            count++;
        }
    }
    cout<<count-1<<endl;
    return 0;
}