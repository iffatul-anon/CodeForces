#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n+1;i<10000;i++){
        char s[5];
        sprintf(s,"%d",i);
        //itoa(i,s,10);
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
            printf("%s\n",s);
            break;
        }
    }
    return 0;
}