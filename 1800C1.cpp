#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int s[n];
        int a[n],x=0;
        long long int count=0,anon=0;
        for(int i=0;i<n;i++){
            scanf("%d",&s[i]);
            if(s[i]==0){
                anon++;
            }
        }
        for(int i=0;i<n;i++){
            if (s[i]>0){
                a[x++]=s[i];
                sort(a,a+x);
            }
            if(s[i]==0 && x>0){
                count=count+a[x-1];
                anon--;
                x--;
            }
            else if(s[i]==0 && x==0){
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