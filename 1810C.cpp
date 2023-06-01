#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,c,d;
        scanf("%lld %lld %lld",&n,&c,&d);
        map<int,int>a;
        for(int i=0;i<n;i++){
            int anon;
            scanf("%d",&anon);
            a[anon]++;
        }
        int count1=0;
        int b[a.size()];
        int x=0;
        std::map<int,int>::iterator it= a.begin();
        while(it!=a.end()){
            count1=count1+(it->second-1);
            b[x++]=it->first;
            it++;
        }
        int bal[x];
        int count=1;
        for(int i=x-1;i>=0;i--){
            if(b[i]-b[i-1]!=1){
                bal[i]=count;
                count=1;
            }
            else{
                bal[i]=count;
                count++;
            }
        }
        long long int min;
        for(int i=0;i<x;i++){
            long long int sum1=(b[i]-i-1)*d;
            long long int sum2=(x-i-bal[i])*c;
            if(i==0){
                min=sum1+sum2;
            }
            if(min>(sum1+sum2)){
                min=sum1+sum2;
            }
        }
        min=min+(count1*c);
        if(((n*c)+d)<min){
            printf("%lld\n",(n*c)+d);
        }
        else{
            printf("%lld\n",min);
        }
    }
}