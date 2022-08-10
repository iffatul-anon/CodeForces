#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    gets(s);
    int l=strlen(s);
    int tem;
    for(int i=0;i<l;i=i+2){
        for(int j=i+2;j<l;j=j+2){
            if(s[i]>s[j]){
                tem=s[i];
                s[i]=s[j];
                s[j]=tem;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}