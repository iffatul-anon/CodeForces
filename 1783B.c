#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n][n];
        int x=1;
        int y=n*n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    if((i+j)%2!=0){
                        a[i][j]=x++;
                    }
                    else{
                        a[i][j]=y--;
                    }
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    if((i+j)%2!=0){
                        a[i][j]=x++;
                    }
                    else{
                        a[i][j]=y--;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}