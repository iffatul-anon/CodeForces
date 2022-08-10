#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0'){
            printf("YES\n");
        }
        else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
            printf("YES\n");
        }
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0'){
            printf("YES\n");
        }
        else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0'){
            printf("YES\n");
        }
        else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}