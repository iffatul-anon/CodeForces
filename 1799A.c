#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int x=n-1;
        int a[50000*2+1]={0};
        int p,b[n];
        for(int i=0;i<n;i++){
            b[i]=-1;
        }
        for(int i=1;i<=m;i++){
            scanf("%d",&p);
            if(a[p]==0){
                a[p]=1;
                if(x>=0){
                    b[x--]=i;
                }
            }
        }
        for(int i=0;i<n;i++){
            printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}