#include<stdio.h>
#include<string.h>
int main(){
    char s[11];
    char max='a';
    scanf("%s",&s);
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]>max){
            max=s[i];
        }
    }
    for(int i=0;i<l;i++){
        if(s[i]==max){
            printf("%c",s[i]);
        }
    }
    printf("\n");
}