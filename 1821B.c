#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a1[n],a2[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a1[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&a2[i]);
        }
        int l,r;
        for(int i=0;i<n;i++){
            if(a1[i]!=a2[i]){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a1[i]!=a2[i]){
                r=i;
                break;
            }
        }
        int flag=0;
        for(int i=l;i>0;i--){
            if(a2[i]<a2[i-1]){
                l=i;
                flag=1;
                break;
            }
        }
        if(flag==0){
            l=0;
        }
        flag=0;
        for(int i=r;i<n-1;i++){
            if(a2[i]>a2[i+1]){
                r=i;
                flag=1;
                break;
            }
        }
        if(flag==0){
            r=n-1;
        }
        printf("%d %d\n",l+1,r+1);
    }
    return 0;
}