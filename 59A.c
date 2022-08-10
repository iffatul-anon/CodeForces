#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    gets(s);
    int l=strlen(s);
    int count1=0,count2=0;
    for(int i=0;i<l;i++){
        if(s[i]>='a' && s[i]<='z'){
            count1++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            count2++;
        }
    }
    if(count2>count1){
        strupr(s);
        printf("%s",s);
    }
    else{
        strlwr(s);
        printf("%s",s);
    }
    return 0;
}