#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int s[n];
        map<int,int>a;
        long long int count=0,anon=0;
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
            if(s[i]==0){
                anon++;
            }
        }
        for(int i=0;i<n;i++){
            if (s[i]>0){
                a[s[i]]++;
            }
            if(s[i]==0 && a.empty()){
                anon--;
            }
            else if(s[i]==0){
                count=count+a.rbegin()->first;
                a.rbegin()->second--;
                if(a.rbegin()->second==0){
                    a.erase(--a.end());
                }
                anon--;
            }
            if(anon==0){
                break;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}