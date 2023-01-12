#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        int b[n];
        int max1=0,max2=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            b[j]=a[j];
        }
        sort(b,b+n);
        for(int j=0;j<n;j++){
            if(a[j]==b[n-1]){
                printf("%d ",a[j]-b[n-2]);
            }
            else{
                printf("%d ",a[j]-b[n-1]);
            }
        }
        printf("\n");
    }
    return 0;
}