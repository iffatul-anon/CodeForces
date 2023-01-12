#include<stdio.h>
#include<string.h>
int main(){
    char n[100],m[100];
    scanf("%s",&n);
    scanf("%s",&m);
    int l=strlen(n);
    int l2=strlen(m);
    if(l!=l2){
        printf("WRONG_ANSWER\n");
        return 0;
    }
    for(int j=0;j<l;j++){
        for(int k=j+1;k<l;k++){
            if(n[j]>n[k]){
                int tem=n[j];
                n[j]=n[k];
                n[k]=tem;
            }
        }
    }
    if(n[0]=='0'){
        for(int j=0;j<l;j++){
            if(n[j]!='0'){
                n[0]=n[j];
                n[j]='0';
                break;
            }
        }
    }
    int flag=0;
    for(int j=0;j<l;j++){
        if(n[j]!=m[j]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("OK\n");
    }
    else{
        printf("WRONG_ANSWER\n");
    }
    return 0;
}