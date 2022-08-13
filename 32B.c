#include<stdio.h>
#include<string.h>
int main(){
    char s[201];
    scanf("%s",&s);
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]=='.'){
            printf("0");
            continue;
        }
        if(s[i]=='-' && s[i+1]=='.'){
            printf("1");
            i++;
            continue;
        }
        if(s[i]=='-' && s[i+1]=='-'){
            printf("2");
            i++;
            continue;
        }
    }
}