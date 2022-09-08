#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,d;
    cin >> n >> d;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int count=0;
    for(int i=0;i<n;i++){
        int sum=a[i];
        while(sum<=d){
            sum=sum+a[i];
            n--;
            if(n-count==0){
                goto anon;
            }
        }
        count++;
    }
    anon:
    cout<<count;
    return 0;
}