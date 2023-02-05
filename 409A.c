#include<stdio.h>
#include<string.h>
int main(){
    char s1[25],s2[25];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int l=strlen(s1);
    int count1=0,count2=0;
    for(int i=0;i<l;i=i+2){
        if(s1[i]==s2[i]){
            continue;
        }
        else if((s1[i]=='8' && s2[i]=='[') || (s1[i]=='[' && s2[i]=='(') || (s1[i]=='(' && s2[i]=='8')){
            count1++;
        } 
        else{
            count2++;
        }
    }
    if(count1>count2){
        printf("TEAM 1 WINS\n");
    }
    else if(count1<count2){
        printf("TEAM 2 WINS\n");
    }
    else{
        printf("TIE\n");
    }
    return 0;
}