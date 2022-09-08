#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    int m;
    scanf("%d",&m);
    int g[m];
    for(int i=0;i<m;i++){
        scanf("%d",&g[i]);
    }
    int tem;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                tem=b[i];
                b[i]=b[j];
                b[j]=tem;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(g[i]>g[j]){
                tem=g[i];
                g[i]=g[j];
                g[j]=tem;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[j]==b[i] || g[j]==b[i]+1 || g[j]==b[i]-1){
                count++;
                for(int k=j;k<m-1;k++){
                    g[k]=g[k+1];
                }
                m--;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
