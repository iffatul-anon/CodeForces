#include<stdio.h>
#include<string.h>
int main(){
    char s1[201];
    char s2[201];
    gets(s1);
    gets(s2);
    int l1=strlen(s1);
    int l2=strlen(s2);
    int flag=0;
    for(int i=0;i<l2;i++){
        if(s2[i]==32){
            continue;
        }
        flag=0;
        for(int j=0;j<l1;j++){
            if(s2[i]==s1[j]){
                flag=1;
                s1[j]=s1[l1-1];
                l1--;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}