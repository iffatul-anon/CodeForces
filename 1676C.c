#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        char s[n][m+1];
        for(int i=0;i<n;i++){
            scanf("%s",s[i]);
        }
        int min=m*26,count;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                count=0;
                for(int k=0;k<m;k++){
                    count=count+abs(s[i][k]-s[j][k]);
                }
                if(min>count){
                    min=count;
                }
            }
        }
        printf("%d\n",min);
    }
    return 0;
}