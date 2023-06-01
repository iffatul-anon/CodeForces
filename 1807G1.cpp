#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int c[n];
        int count=0;
        for(int i=0;i<n;i++){
            scanf("%d",&c[i]);
            if(c[i]==1){
                count++;
            }
        }
        if(count==0){
            printf("NO\n");
        }
        else{
            sort(c,c+n);
            int flag=0;
            for(int i=n-1;i>0;i--){
                int anon=c[i];
                for(int j=i-1;j>=0;j--){
                    if(anon-c[j]>=0){
                        anon=anon-c[j];
                    }
                    if(anon==0){
                        break;
                    }
                }
                if(anon!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }
    }
    return 0;
}