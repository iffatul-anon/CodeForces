#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int x=n;
        for(int j=0;j<n/2;j++){
            if(s[j]!=s[n-j-1]){
                x=x-2;
            }
            else{
                break;
            }
        }
        printf("%d\n",x);
    }
    return 0;
}