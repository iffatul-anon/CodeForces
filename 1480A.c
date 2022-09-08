#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[51];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        for(int j=0;j<l;j++){
            if(j%2==0){
                if(s[j]=='a'){
                    s[j]='b';
                }
                else{
                    s[j]='a';
                }
            }
            else{
                if(s[j]=='z'){
                    s[j]='y';
                }
                else{
                    s[j]='z';
                }
            }
        }
        printf("%s\n",s);
    }
    return 0;
}