#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[100001];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int flag0=0,flag1=0,flag00=0,flag2=0;
        for(int j=0;j<l;j++){
            if(s[j]=='0'){
                flag0=1;
            }
            if(s[j]=='1'){
                flag1=1;
            }
            if(flag0==1 && s[j]=='1'){
                flag00=1;
            }
            if(flag00==1 && s[j]=='0'){
                flag2=1;
            }
        }
        if(flag0==0){
            printf("0\n");
        }
        else if(flag1==0){
            printf("1\n");
        }
        else{
            if(flag2==0){
                printf("1\n");
            }
            else if(flag2==1){
                printf("2\n");
            }
        }
    }
    return 0;
}