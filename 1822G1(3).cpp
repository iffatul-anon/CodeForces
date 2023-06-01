#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int a[n],x=0;
        map<int ,int >mp;
        for(int i=0;i<n;i++){
            int anon;
            scanf("%d",&anon);
            mp[anon]++;
        }
        long long int count=0,z;
        std::map<int, int>::iterator it = mp.begin();
        while(it!=mp.end()){
            z=it->second;
            count=count+(z*(z-1)*(z-2));
            a[x++]=it->first;
            it++;
        }
        long long int i,j;
        for(i=0;i<x;i++){
            for(j=2;(j*j*a[i])<=a[x-1];j++){
                long long int anon1=a[i]*j;
                long long int anon2=a[i]*j*j;
                if(mp.count(anon1) && mp.count(anon2)){
                    long long int a1=mp[a[i]],a2=mp[anon1],a3=mp[anon2];
                    count=count+(a1*a2*a3);
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}