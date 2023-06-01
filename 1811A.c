#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,d;
        scanf("%d %d",&n,&d);
        char s[n+1];
        scanf("%s",&s);
        int i;
        for(i=0;i<n;i++){
            if(s[i]-48>=d){
                printf("%c",s[i]);
            }
            else{
                break;
            }
        }
        printf("%d",d);
        for(i=i;i<n;i++){
            printf("%c",s[i]);
        }
        printf("\n");
    }
}