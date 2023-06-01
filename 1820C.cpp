#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int flag=0;
        map<int ,int>anon;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            anon[a[i]]++;
            if(a[i]==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("YES\n");
        }
        else{
            int x=0,i;
            int a2[n];
            int flag1=0,flag2=0;
            std::map<int, int>::iterator it = anon.begin();
            while(it!=anon.end()){
                a2[x++]=it->first;
                if(it->second>1){
                    flag1=1;
                }
                it++;
            }
            for(i=1;i<x;i++){
                if(a2[i]-a2[i-1]!=1){
                    flag2=1;
                    break;
                }
            }
            if(flag2==0 && flag1==0){
                printf("NO\n");
            }
            else if((flag2==0 && flag1==1) || (a2[i]-a2[i-1]>2)){
                printf("YES\n");
            }
            else{
                int bal=a2[i];
                int flag3,flag4;
                for(int i=0;i<n;i++){
                    if(bal==a[i]){
                        flag3=i;
                        break;
                    }
                }
                for(int i=n-1;i>=0;i--){
                    if(bal==a[i]){
                        flag4=i;
                        break;
                    }
                }
                for(int i=flag3;i<=flag4;i++){
                    a[i]=bal-1;
                }
                map<int,int>anon2;
                for(int i=0;i<n;i++){
                    anon2[a[i]]++;
                }
                int a3[n],y=0;
                std::map<int, int>::iterator it = anon2.begin();
                while(it!=anon2.end()){
                    a3[y++]=it->first;
                    it++;
                }
                int flag5=0;
                for(int i=1;i<y;i++){
                    if(a3[i]-a3[i-1]!=1){
                        flag5=1;
                        break;
                    }
                    if(a3[i]==bal-1){
                        break;
                    }
                }
                if(flag5==1 || a3[0]!=0){
                    printf("NO\n");
                }
                else{
                    printf("YES\n");
                }
            }
        }
    }
    return 0;
}