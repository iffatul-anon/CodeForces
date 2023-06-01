#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    n--;
    for(int i=0;i<n;i++){
        a[i]=a[i+1]-a[i];
    }
    sort(a,a+n);
    int sum=0;
    k--;
    for(int i=0;i<n-k;i++){
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    return 0;
}