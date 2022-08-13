#include<stdio.h>
#include<string.h>
int main(){
    int n,sum=0;
    char s[15];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&s);
        if(s[0]=='T'){
            sum=sum+4;
        }
        if(s[0]=='C'){
            sum=sum+6;
        }
        if(s[0]=='O'){
            sum=sum+8;
        }
        if(s[0]=='D'){
            sum=sum+12;
        }
        if(s[0]=='I'){
            sum=sum+20;
        }
    }
    printf("%d\n",sum);
    return 0;
}