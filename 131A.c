#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    gets(s);
    int l=strlen(s);
    int flag1=0,flag2=0;
    if(s[0]>=97 && s[0]<=122){
        flag1=1;
    }
    for(int i=1;i<l;i++){
        if(s[i]>=97 && s[i]<=122){
            flag2=1;
        }
    }
    if(flag1==0 && flag2==0){
        strlwr(s);
        printf("%s",s);
    }
    else if(flag1=1 && flag2==0){
        strlwr(s);
        s[0]=s[0]-32;
        printf("%s",s);
    }
    else{
        printf("%s",s);
    }
    return 0;
}