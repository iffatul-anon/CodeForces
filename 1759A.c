#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[100];
        scanf("%s",&s);
        int l=strlen(s);
        int flag=0;
        if(s[0]=='Y'){
            for(int j=0;j<l;j=j+3){
                if(s[j]!='Y'){
                    flag=1;
                    break;
                }
                if(j+1==l){
                    break;
                }
                if(s[j+1]!='e'){
                    flag=1;
                    break;
                }
                if(j+2==l){
                    break;
                }
                if(s[j+2]!='s'){
                    flag=1;
                    break;
                }
            }
        }
        else if(s[0]=='e'){
            for(int j=0;j<l;j=j+3){
                if(s[j]!='e'){
                    flag=1;
                    break;
                }
                if(j+1==l){
                    break;
                }
                if(s[j+1]!='s'){
                    flag=1;
                    break;
                }
                if(j+2==l){
                    break;
                }
                if(s[j+2]!='Y'){
                    flag=1;
                    break;
                }
            }
        }
        else if(s[0]=='s'){
            for(int j=0;j<l;j=j+3){
                if(s[j]!='s'){
                    flag=1;
                    break;
                }
                if(j+1==l){
                    break;
                }
                if(s[j+1]!='Y'){
                    flag=1;
                    break;
                }
                if(j+2==l){
                    break;
                }
                if(s[j+2]!='e'){
                    flag=1;
                    break;
                }
            }
        }
        else{
            flag=1;
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}