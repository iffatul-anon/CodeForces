#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int p[n];
        int q[n];
        for(int j=0;j<n;j++){
            scanf("%d",&p[j]);
            q[j]=j+1;
        }
        if(n==1){
            printf("-1\n");
        }
        else{
            for(int j=0;j<n-1;j++){
                if(p[j]==q[j]){
                    int tem=q[j];
                    q[j]=q[j+1];
                    q[j+1]=tem;
                }
            }
            if(p[n-1]==q[n-1]){
                int tem=q[n-1];
                q[n-1]=q[n-2];
                q[n-2]=tem;
            }
            for(int j=0;j<n;j++){
                printf("%d ",q[j]);
            }
            printf("\n");
        }
    }
    return 0;
}