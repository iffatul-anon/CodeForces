#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        int a[n][n],x,y;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                a[j][k]=0;
            }
        }
        for(int j=0;j<m;j++){
            scanf("%d %d",&x,&y);
            a[x-1][y-1]=1;
        }
        int flag=0;
        for(int j=0;j<n;j++){
            int flag1=0;
            for(int k=0;k<n;k++){
                if(a[j][k]==1){
                    flag1=1;
                    break;
                }
            }
            if(flag1==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}