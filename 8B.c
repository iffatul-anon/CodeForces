#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    char s[1000];
    scanf("%s",&s);
    int l=strlen(s);
    int a[202][202];
    for(int i=0;i<202;i++){
        for(int j=0;j<202;j++){
            a[i][j]=0;
        }
    }
    int x=100,y=100;
    a[x][y]=1;
    for(int i=0;i<l;i++){
        if(s[i]=='R'){
            x++;
        }
        else if(s[i]=='L'){
            x--;
        }
        else if(s[i]=='U'){
            y++;
        }
        else if(s[i]=='D'){
            y--;
        }
        if(a[x][y]==1){
            printf("BUG\n");
            return 0;
        }
        else{
            a[x][y]=1;
        }
    }
    if(l>1 && ((x==101 && y==100) || (x==99 && y==100) || (y==101 && x==100) || (y==99 && x==100))){
        printf("BUG\n");
    }
    else{
    int flag=0;
    for(int i=0;i<202;i++){
        for(int j=0;j<202;j++){
            flag=0;
            if(a[i][j]==1){
                if(a[i+1][j]==1){
                    flag++;
                }
                if(a[i-1][j]==1){
                    flag++;
                }
                if(a[i][j+1]==1){
                    flag++;
                }
                if(a[i][j-1]==1){
                    flag++;
                }
                if(flag>=3){
                    printf("BUG\n");
                    return 0;
                }
            }
        }
    }
    printf("OK\n");
    }
    return 0;
}