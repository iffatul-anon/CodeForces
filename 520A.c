#include<stdio.h>
#include<string.h>
int main(){
    int n,flag;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    if(n<26){
        printf("NO\n");
    }
    else{
        strlwr(s);
        for(int i='a';i<='z';i++){
            flag=0;
            for(int j=0;j<n;j++){
                if(i==s[j]){
                    flag=1;
                }
            }
            if(flag==0){
                goto anon;
            }
        }
        anon:
        if(flag==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}