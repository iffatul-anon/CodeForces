#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[4];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        strlwr(s);
        if(s[0]=='y' && s[1]=='e' && s[2]=='s'){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}