#include<stdio.h>
#include<string.h>
int main(){
    char s[51];
    scanf("%s",&s);
    int l=strlen(s);
    int count=0;
    for(int i=0;i<l;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
