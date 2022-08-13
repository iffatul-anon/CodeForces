#include<stdio.h>
#include<string.h>
int main(){
    char s[51];
    char t[51];
    scanf("%s",&s);
    scanf("%s",&t);
    int l=strlen(s);
    int l2=strlen(t);
    int i=0;
        for(int j=0;j<l2;j++){
            if(s[i]==t[j]){
                i++;
            }
        }
        printf("%d\n",i+1);
      
}