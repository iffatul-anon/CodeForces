#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        count++;
        if(a[i]!=a[i-1]){
            break;
        }
    }
    printf("%d\n",count+1);
    return 0;
}