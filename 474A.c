#include<stdio.h>
#include<string.h>
int main(){
    char c,s[101];
    scanf("%c",&c);
    scanf("%s",&s);
    int l=strlen(s);
    char s2[31]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    if(c=='R'){
        for(int i=0;i<l;i++){
            for(int j=0;j<30;j++){
                if(s[i]==s2[j]){
                    s[i]=s2[j-1];
                    break;
                }
            }
        }
    }
    if(c=='L'){
        for(int i=0;i<l;i++){
            for(int j=0;j<30;j++){
                if(s[i]==s2[j]){
                    s[i]=s2[j+1];
                    break;
                }
            }
        }
    }
    printf("%s\n",s);
    return 0;
}