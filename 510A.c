#include<stdio.h>
int main(){

    int n,m,flag;

    scanf("%d %d",&n,&m);

    int a[n][m];

    for(int i=0;i<n;i=i+2){
        for(int j=0;j<m;j++){
            a[i][j]='#';
        }
    }

    for(int i=1;i<n;i=i+4){
        for(int j=0;j<m-1;j++){
            a[i][j]='.';
        }
        a[i][m-1]='#';
    }

    for(int i=3;i<n;i=i+4){
        a[i][0]='#';
        for(int j=1;j<m;j++){
            a[i][j]='.';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }   

    return 0;
}