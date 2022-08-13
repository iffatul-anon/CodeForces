#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    char s[11];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int flag=0;
        for(int j=0;j<l;j++){
            if(s[j]=='0' || s[j]=='2' || s[j]=='4' || s[j]=='6' || s[j]=='8'){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("-1\n");
        }
        else{
        if(s[l-1]=='0' || s[l-1]=='2' || s[l-1]=='4' || s[l-1]=='6' || s[l-1]=='8'){
            printf("0\n");
        }
        else if(s[0]=='0' || s[0]=='2' || s[0]=='4' || s[0]=='6' || s[0]=='8'){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
        }
    }

}