#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",&s);
    int flag=0;
    char anon[25][5]={"0","8","16","24","32","56","64","72","96","112","144","152","192","344","376","512","544","552","592","744","776","912","944","952","992"};
    for(int i=0;i<25;i++){
        int k=0;
        flag=1;
        for(int j=0;j<strlen(anon[i]);j++){
            flag=1;
            for(k=k;k<strlen(s);k++){
                if(s[k]==anon[i][j]){
                    flag=0;
                    k++;
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==0){
            printf("YES\n%s\n",anon[i]);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}