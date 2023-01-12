#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i=i+2){
        b[i]=a[i+1];
        b[i+1]=a[i];
    }
    if(n%2!=0){
        b[n-1]=a[n-1];
    }
    printf("%d\n",(n-1)/2);
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}