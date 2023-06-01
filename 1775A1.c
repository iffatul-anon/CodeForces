#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        scanf("%s",&s);
        int l=strlen(s);
        if(s[0]=='a'){
            for(int i=0;i<l-2;i++){
                printf("%c",s[i]);
            }
            printf(" %c %c\n",s[l-2],s[l-1]);
        }
        else{
            printf("%c %c ",s[0],s[1]);
            for(int i=2;i<l;i++){
                printf("%c",s[i]);
            }
            printf("\n");
        }
    }
    return 0;
}