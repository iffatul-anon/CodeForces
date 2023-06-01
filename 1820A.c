#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000];
        scanf("%s",&s);
        int count=0,flag=0;
        int l=strlen(s);
        if(s[0]=='_'){
            count++;
        }
        if(s[l-1]=='_'){
            count++;
        }
        for(int i=0;i<l;i++){
            if(s[i]=='_' && s[i+1]=='_'){
                count++;
            }
            if(s[i]=='_'){
                flag=1;
            }
        }
        if(flag==0 && l==1){
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}