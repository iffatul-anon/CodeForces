#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int bal[1000001]={0},max=0; 
        map<int ,int >mp;
        for(int i=0;i<n;i++){
            int anon;
            scanf("%d",&anon);
            mp[anon]++;
            bal[anon]++;
            if(max<anon){
                max=anon;
            }
        }
        unsigned long long int count=0;
        std::map<int, int>::iterator it = mp.begin();
        while(it!=mp.end()){
            unsigned long long int z=it->second;
            unsigned long long int x=it->first,i,a,b,c;
            count=count+(z*(z-1)*(z-2));
            for(i=2;i*i*x<=max;i++){
                a=bal[x],b=bal[x*i],c=bal[x*i*i];
                count=count+(a*b*c);
            }
            it++;
        }
        printf("%llu\n",count);
    }
    return 0;
}