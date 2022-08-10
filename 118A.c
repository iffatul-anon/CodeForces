#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    gets(s);
    int l=strlen(s);
    strlwr(s);
    for(int i=0;i<l;i++){
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            continue;
        }
        printf(".%c",s[i]);
    }

    return 0;
}