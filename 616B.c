#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int max=0;
    for(int i=0;i<n;i++){
        int min=1000000000;
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
        if(max<min){
            max=min;
        }
    }
    printf("%d\n",max);
    return 0;
}