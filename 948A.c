#include<stdio.h>
#include<string.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    char s[r+1][c+1];
    for(int i=0;i<r;i++){
        scanf("%s",&s[i]);
    }
    int flag=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(s[i][j]=='W' && (s[i-1][j]=='S' || s[i+1][j]=='S' || s[i][j-1]=='S' || s[i][j+1]=='S')){
                flag=1;
                goto anon;
            }
            if(s[i][j]=='.'){
                s[i][j]='D';
            }
        }
    }
    anon:
    if(flag==1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        for(int i=0;i<r;i++){
            printf("%s\n",s[i]);
        }
    }
    return 0;
}