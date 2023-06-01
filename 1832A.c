#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[100];
        scanf("%s",s);
        int l= strlen(s);
        int flag=0;
        for(int i=1;i<l/2;i++){
            if(s[i]!=s[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}