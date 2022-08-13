#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[10];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        char s2[l+1];
        for(int j=0;j<l;j++){
            s2[j]=s[l-1-j];
        }
        int count=0;
        for(int j=0;j<l;j++){
            if(s2[j]!='0'){
                count++;
            }
        }
        printf("%d\n",count);
        for(int j=0;j<l;j++){
            if(s2[j]=='0'){
                continue;
            }
            printf("%c",s2[j]);
            for(int k=0;k<j;k++){
                printf("0");
            }
            printf(" ");
            
        }
        printf("\n");

    }
    
}