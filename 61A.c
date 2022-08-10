#include<stdio.h>
#include<string.h>
int main(){
    char s1[101];
    char s2[101];
    gets(s1);
    gets(s2);
    int l=strlen(s1);
    for(int i=0;i<l;i++){
        if(s1[i]!=s2[i]){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    return 0;
}