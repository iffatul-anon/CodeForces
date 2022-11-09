#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i+j)%2==0){
                    if(a[i][j]%2!=0){
                        a[i][j]=a[i][j]+1;
                    }
                }
                if((i+j)%2!=0){
                    if(a[i][j]%2==0){
                        a[i][j]=a[i][j]+1;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}