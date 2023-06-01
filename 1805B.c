#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        char min=s[0];
        int pos;
        for(int i=0;i<n;i++){
            if(min>=s[i]){
                min=s[i];
                pos=i;
            }
        }
        printf("%c",min);
        for(int i=0;i<n;i++){
            if(pos==i){
                continue;
            }
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
