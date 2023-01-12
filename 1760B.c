#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int max=0;
        for(int j=0;j<n;j++){
            if(max<s[j]){
                max=s[j];
            }
        }
        printf("%d\n",max-96);
    }
    return 0;
}