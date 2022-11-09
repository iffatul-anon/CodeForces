#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    scanf("%s",&s);
    int l=strlen(s);
    int count=0;
    for(int i=0;i<l;i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    if(count==4 || count==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}