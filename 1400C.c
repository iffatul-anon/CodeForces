#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000001],w[1000001];
        int x;
        scanf("%s",s);
        scanf("%d",&x);
        int l=strlen(s);
        for(int i=0;i<l;i++){
            if((i>=x && s[i-x]=='0') || (i+x<l && s[i+x]=='0')){
                w[i]='0';
            }
            else{
                w[i]='1';
            }
        }
        w[l]=0;
        int flag=0;
        for(int i=0;i<l;i++){
            if(s[i]=='1' && (i<x || w[i-x]=='0') && (i+x>=l || w[i+x]=='0')){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("-1\n");
        }
        else{
            printf("%s\n",w);
        }
    }
    return 0;
}