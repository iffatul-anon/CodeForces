#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int left = 0, right = 0, count = 0;
        set<int> s;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            if (x == -1){
                left++;
            }
            else if (x == -2){
                right++;
            }
            else{
                s.insert(x);
            }
        }
        int maxi = 0, size = s.size();
        set<int>::iterator it=s.begin();
        while (it!=s.end()){
            count++;
            int q=*it;
            int sum = size + min(left,q-count) + min(right, (m-q)-(size - count));
            if (maxi < sum) maxi = sum;
            it++;
        }
        int ans;
        if(left>right){
            ans=left+s.size();
            ans=min(ans,m);
        }else{
            ans=right+s.size();
            ans=min(ans,m);
        }
     cout<<max(ans,maxi)<<endl;
    }
    }

