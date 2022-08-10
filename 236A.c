#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k;
    char s[101];
    gets(s);
    int l=strlen(s);
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(s[i]==s[j]){
                for(k=j;k<l-1;k++){
                    s[k]=s[k+1];
                }
                l--;
                j--;
            }
        }
        
    }
    if(l%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
    return 0;
}