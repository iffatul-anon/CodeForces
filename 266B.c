#include<stdio.h>
#include<string.h>
int main(){
    int n,t,tem;
    scanf("%d %d",&n,&t);
    char s[n+1];
    scanf("%s",&s);
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                tem=s[j];
                s[j]=s[j+1];
                s[j+1]=tem;
                j++;
            }
        }

    }
    printf("%s\n",s);
    return 0;
}