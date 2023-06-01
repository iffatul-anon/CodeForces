#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int max=0,count=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                count++;
                if(max<count){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        printf("%d\n",max+2);
    }
}