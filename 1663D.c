#include<stdio.h>
int main(){
    char s[4];
    scanf("%s",&s);
    int x;
    scanf("%d",&x);
    if((s[1]=='B' && x<2000) || (s[1]=='R' && x<2800) || (s[1]=='G' && x>=1200)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}