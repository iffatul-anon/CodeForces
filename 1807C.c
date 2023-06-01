#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int flag=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                flag=1;
                break;
            }
            for(int j=i+3;j<n;j=j+2){
                if(s[i]==s[j]){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}