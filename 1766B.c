#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int flag=0;
        for(int j=0;j<n;j++){
            for(int k=j+2;k<n;k++)
                if(s[j]==s[k] && s[j+1]==s[k+1]){
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
