#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector< pair <int,int> > v;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            v.push_back( make_pair(a,i) );
        }
        sort(v.begin(),v.end());
        int x[n+1],y[n+1];
        int b[n+1],c[n+1];
        for(int i=0;i<=n;i++){
            x[i]=0;
            y[i]=0;
            b[i]=0;
            c[i]=0;
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(x[v[i].first]==0){
                x[v[i].first]=1;
                b[i]=v[i].first;
            }
            else if(y[v[i].first]==0){
                y[v[i].first]=1;
                c[i]=v[i].first;
            }
            else{
                flag=1;
                break;
            }
            if(v[i].first<i+1){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            int j=n,k=n;
            for(int i=n-1;i>=0;i--){
                if(b[i]==0){
                    for(j=j;j>0;j--){
                        if(x[j]==0){
                            b[i]=j;
                            x[j]=1;
                            j--;
                            break;
                        }
                    }
                }
                else{
                    for(k=k;k>0;k--){
                        if(y[k]==0){
                            c[i]=k;
                            y[k]=1;
                            k--;
                            break;
                        }
                    }
                }
            }
            vector< pair <int,int> > v2;
            for(int i=0;i<n;i++){
                v2.push_back( make_pair(v[i].second,i) );
            }
            sort(v2.begin(),v2.end());
            printf("YES\n");
            for(int i=0;i<n;i++){
                printf("%d ",b[v2[i].second]);
            }
            printf("\n");
            for(int i=0;i<n;i++){
                printf("%d ",c[v2[i].second]);
            }
            printf("\n");
        }
    }
    return 0;
}