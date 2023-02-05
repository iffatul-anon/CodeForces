#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",&s);
    int l=strlen(s);
    int count=0;
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            for(int k=j+1;k<l;k++){
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q'){
                    count++;
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}