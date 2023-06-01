#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){  
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<pair<int,int> >anon;
        for(int i=1;i<=n;i++){
            int a;
            scanf("%d",&a);
            anon.push_back(make_pair(a,i));
        }
        sort(anon.begin(),anon.end());
        if(anon[0].first+anon[1].first<=anon[n-1].first){
            printf("%d %d %d\n",anon[0].second,anon[1].second,anon[n-1].second);
        }
        else{
            printf("-1\n");
        }
    }
}