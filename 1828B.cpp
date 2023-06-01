#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){  
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],x=0;
        for(int i=1;i<=n;i++){
            int b;
            scanf("%d",&b);
            if(b!=i){
                a[x++]=abs(b-i);
            }
        }
        int gcd=a[0];
        for(int i=1;i<x;i++){
            gcd=__gcd(gcd,a[i]);
        }
        printf("%d\n",gcd);
    }
}