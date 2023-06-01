#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,w,sum=0;
        scanf("%lld %lld",&n,&w);
        vector<pair<long long int,int> > anon;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            anon.push_back(make_pair(a,i));
        }
        sort(anon.begin(),anon.end());
        int a[n],x=0;
        for(int i=n-1;i>=0;i--){
            if(sum+anon[i].first<=w){
                sum=sum+anon[i].first;
                a[x++]=anon[i].second;
            }
        }
        if(sum<(w+1)/2){
            printf("-1\n");
        }
        else{
            printf("%d\n",x);
            for(int i=x-1;i>=0;i--){
                printf("%d ",a[i]+1);
            }
            printf("\n");
        }
    }
    return 0;
}