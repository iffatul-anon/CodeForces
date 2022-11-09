#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    char s1[11]={'0','0','0','0','0','0','0','0','0','0'};
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            for(int j=0;j<10;j++){
                if(s1[j]=='0'){
                    s1[j]='1';
                    break;
                }
            }
        }
        else if(s[i]=='R'){
            for(int j=9;j>=0;j--){
                if(s1[j]=='0'){
                    s1[j]='1';
                    break;
                }
            }
        }
        if(s[i]>='0' && s[i]<='9'){
            int x=s[i]-48;
            s1[x]='0';
        }
    }
    printf("%s\n",s1);
    return 0;
}