#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        vector<pair<int,int> >a;
        int b[n];
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            a.push_back(make_pair(x,i));
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        sort(a.begin(),a.end());
        sort(b,b+n);
        vector<pair<int,int> >c;
        for(int i=0;i<n;i++){
            c.push_back(make_pair(a[i].second,b[i]));
        }
        sort(c.begin(),c.end());
        for(int i=0;i<n;i++){
            printf("%d ",c[i].second);
        }
        printf("\n");
    }
    return 0;
}