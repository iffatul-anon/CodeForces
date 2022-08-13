#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        for(int j=0;j<n;j++){
            if(s[j]=='U'){
                printf("D");
            }
            else if(s[j]=='D'){
                printf("U");
            }
            else{
                printf("%c",s[j]);
            }
        }
        printf("\n");
    }
    

    return 0;
}