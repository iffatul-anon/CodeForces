#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        map<int ,int>a;
        int b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
            a[b[i]]++;
        }
        int flag=0;
        map<int,int>:: iterator it = a.begin();
        while(it!=a.end()){
            if(it->second==1){
                flag=it->first;
                break;
            }
            it++;
        }
        if(flag==0){
            printf("-1\n");
        }
        else{
            int i;
            for(i=0;i<n;i++){
                if(flag==b[i]){
                    break;
                }
            }
            printf("%d\n",i+1);
        }
    }
    return 0;
}