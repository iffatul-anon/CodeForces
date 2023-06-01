#include <stdio.h>
#include<string.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int s[n][m];
    char a[m+1];
    for(int i=0;i<n;i++){
        scanf("%s",a);
        for(int j=0;j<m;j++){
            if(a[j]=='.'){
                s[i][j]=1;
            }
            else{
                s[i][j]=2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]==1){
                if((i+j)%2==0){
                    printf("B");
                }
                else{
                    printf("W");
                }
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}