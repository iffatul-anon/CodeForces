#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[20],s2[20]="codeforces";
        scanf("%s",s);
        int count=0;
        for(int i=0;i<10;i++){
            if(s[i]!=s2[i]){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}