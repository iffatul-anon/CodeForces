#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    int max=0;
    char x,y;
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=0;j<n-1;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                count++;
            }
        }
        if(max<count){
            max=count;
            x=s[i];
            y=s[i+1];
        }
    }
    printf("%c%c\n",x,y);
    return 0;
}