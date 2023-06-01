#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k;
        scanf("%d",&k);
        char s[k+1];
        scanf("%s",&s);
            int flag=0;
            char s2[]="FBFFBFFBFBFFBFFBFBFFBFFBFB";

            if(strstr(s2,s)){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
    }
    return 0;
}