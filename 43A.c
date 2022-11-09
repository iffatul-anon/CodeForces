#include<stdio.h>
#include<string.h>
int main(){
    int n,count1=1,count2=0;
    scanf("%d",&n);
    char s[11],s1[11],s2[11];
    scanf("%s",&s1);
    for(int i=1;i<n;i++){
        scanf("%s",&s);
        if(strcmp(s1,s)==0){
            count1++;
        }
        else{
            count2++;
            strcpy(s2,s);
        }
    }
    if(count1>count2){
        printf("%s\n",s1);
    }
    else{
        printf("%s\n",s2);
    }
    return 0;
}