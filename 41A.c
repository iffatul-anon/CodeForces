#include<stdio.h>
#include<string.h>
int main(){
    char s1[101];
    char s2[101];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int l=strlen(s1);
    char s3[l];
    for(int i=0;i<l;i++){
        s3[i]=s1[l-1-i];
    }
   int flag=0;
   for(int i=0;i<l;i++){
        if(s2[i]!=s3[i]){
            flag=1;
            break;
        }
   }
    if(flag==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}