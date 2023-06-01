#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        map<int ,int>a;
        for(int i=0;i<n;i++){
            int b;
            scanf("%d",&b);
            a[b]++;
        }
        printf("%d\n",a.size());
    }
    return 0;
}