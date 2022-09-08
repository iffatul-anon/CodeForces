#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",&s);
    int l=strlen(s);
    int count=1;
    int max=0;
    for(int i=0;i<l;i++){
        if(s[i]==s[i+1]){
            count++;
            if(max<count){
                max=count;
            }
        }
        else{
            count=1;
        }
    }
    if(max<7){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}