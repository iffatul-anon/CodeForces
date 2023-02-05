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
        sort(a,a+n,greater<int>());
        long long int suma=0,sumb=0;
        for(int j=0;j<n;j++){
            if(j%2==0){
                if(a[j]%2==0){
                    suma=suma+a[j];
                }
            }
            else{
                if(a[j]%2!=0){
                    sumb=sumb+a[j];
                }
            }
        }
        if(suma>sumb){
            printf("Alice\n");
        }
        else if(suma<sumb){
            printf("Bob\n");
        }
        else{
            printf("Tie\n");
        }
    }
    return 0;
}