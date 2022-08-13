#include<stdio.h>
#include<string.h>
int main(){
    char s[8];
    scanf("%s",&s);
    int a=s[6];
    printf("%d\n",a%2);
    return 0;
}