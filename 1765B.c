#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        if(n==1){
            printf("YES\n");
        }
        else{
            int flag=0;
            for(int j=1;j<n;j=j+3){
                if(s[j]!=s[j+1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}