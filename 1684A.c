#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        if(l==2){
            printf("%c\n",s[1]);
        }
        else{
            char min=s[0];
            for(int j=0;j<l;j++){
                if(min>s[j]){
                    min=s[j];
                }
            }
            printf("%c\n",min);
        }

    }
    return 0;
}