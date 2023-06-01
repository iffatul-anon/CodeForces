#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,count=1;
        scanf("%d %d",&n,&k);
        char s[n][k+1];
        for(int i=0;i<n;i++){
            scanf("%s",s[i]);
        }
        for(int i=0;i<k;i++){
            for(int j=1;j<n;j++){
                if(s[0][i]!=s[j][i]){
                    s[j][i]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(strlen(s[0])==strlen(s[i])){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}