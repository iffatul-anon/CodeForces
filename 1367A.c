#include<stdio.h>
#include<string.h>
int main(){
    int n,l;
    char s[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&s);
        l=strlen(s);
        printf("%c%c",s[0],s[1]);
        for(int j=3;j<l;j=j+2){
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}