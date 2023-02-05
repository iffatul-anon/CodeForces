#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int flag=0,x=0,y=0;
        for(int j=0;j<n;j++){
            if(s[j]=='L'){
                x--;
            }
            else if(s[j]=='R'){
                x++;
            }
            else if(s[j]=='U'){
                y++;
            }
            else if(s[j]=='D'){
                y--;
            }
            if(x==1 && y==1){
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