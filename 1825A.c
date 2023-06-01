#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        int flag=0;
        for(int i=0;i<l-1;i++){
            if(s[i]!=s[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d\n",l-1);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}