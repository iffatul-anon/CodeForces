#include<stdio.h>
#include<string.h>
int main(){
    int n,l;
    char s1[101];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",&s1);

        l=strlen(s1);

        if(l>10){
            printf("%c%d%c\n",s1[0],l-2,s1[l-1]);
        }
        else{
            printf("%s\n",s1);
        }
    }
    return 0;
}