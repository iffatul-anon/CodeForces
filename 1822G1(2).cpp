#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int a[n],b[n],x=0,y=0,max=0;
        map<int ,int >mp;
        for(int i=0;i<n;i++){
            int anon;
            scanf("%d",&anon);
            mp[anon]++;
            if(max<anon){
                max=anon;
            }
        }
        unsigned long long int count=0,z;
        std::map<int, int>::iterator it = mp.begin();
        while(it!=mp.end()){
            z=it->second;
            count=count+(z*(z-1)*(z-2));
            a[x++]=it->first;
            b[y++]=it->second;
            it++;
        }
        unsigned long long int i,j,k;
        for(i=0;i<x;i++){
            for(j=2;j*j*a[i]<=max;j++){
                unsigned long long int anon1=a[i]*j;
                long long int l=i,h=x,mid1;
                while(l<=h){
                    mid1=(l+h)/2;
                    if(a[mid1]==anon1){
                        break;
                    }
                    if(a[mid1]>anon1){
                        h=mid1-1;
                    }
                    else{
                        l=mid1+1;
                    }
                }
                if(l<=h){
                    unsigned long long int anon2=a[i]*j*j;
                    long long int l=mid1,h=x,mid2;
                    while(l<=h){
                        mid2=(l+h)/2;
                        if(a[mid2]==anon2){
                            break;
                        }
                        if(a[mid2]>anon2){
                            h=mid2-1;
                        }
                        else{
                            l=mid2+1;
                        }
                    }
                    if(l<=h){
                        count=count+(b[i]*b[mid1]*b[mid2]);
                    }
                }
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}