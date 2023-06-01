#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        scanf("%s",&s);
        int count=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='N'){
                count++;
            }
        }
        if(count==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}