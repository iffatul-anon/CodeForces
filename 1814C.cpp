#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,n,s1,s2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&n,&s1,&s2);
        vector< pair <int,int> > v;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            v.push_back( make_pair(a,i) );
        }
        sort(v.begin(),v.end());
        int l=n;
        long long int sum1=0,sum2=0;
        int count1=0,count2=0;
        int a[n],b[n];
        while(l--){
            if(sum1+s1<=sum2+s2){
                a[count1++]=v[l].second+1;
                sum1=sum1+s1; 
            }
            else{   
                b[count2++]=v[l].second+1;
                sum2=sum2+s2;
            }
        }
        printf("%d ",count1);
        for(int i=0;i<count1;i++){
            printf("%d ",a[i]);
        }
        printf("\n%d ",count2);
        for(int i=0;i<count2;i++){
            printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}