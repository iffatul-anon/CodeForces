#include<iostream>
#include<map>
using namespace std;
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int count=0;
        int a[200010]={0};
        map<int ,int>anon;
        for(int j=0;j<n;j++){
            scanf("%d",&x);
            if(a[x]==0){
                a[x]=1;
                anon[x]++;
            }
            else{
                a[x+1]=1;
                anon[x+1]++;
            }
        }
        printf("%lu\n",anon.size());
    }
    return 0;
}