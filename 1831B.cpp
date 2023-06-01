#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        a[n]=-1;
        b[n]=-1;
        map<int,int>aa,bb;
        int count=1,max=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                count++;
            }
            else{
                if(aa[a[i]]==0 || aa[a[i]]<count){
                    aa[a[i]]=count;
                    if(max<aa[a[i]]){
                        max=aa[a[i]];
                    }
                }
                count=1;
            }
        }
        count=1;
        for(int i=0;i<n;i++){
            if(b[i]==b[i+1]){
                count++;
            }
            else{
                if(bb[b[i]]==0 || bb[b[i]]<(aa[b[i]]+count)){
                    bb[b[i]]=aa[b[i]]+count;
                }
                if(max<bb[b[i]]){
                    max=bb[b[i]];
                }
                count=1;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}