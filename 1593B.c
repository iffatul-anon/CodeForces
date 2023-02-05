#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[20];
        scanf("%s",&s);
        int l=strlen(s);
        int a=l,b=l;
        int flag=0;
        for(int j=l-1;j>=0;j--){
            if(flag==1 && (s[j]=='0' || s[j]=='5')){
                a=l-j-2;
                break;
            }
            if(s[j]=='0'){
                flag=1;
            }
        }
        flag=0;
        for(int j=l-1;j>=0;j--){
            if(flag==1 && (s[j]=='2' || s[j]=='7')){
                b=l-j-2;
                break;
            }
            if(s[j]=='5'){
                flag=1;
            }
        }
        if(a<b){
            printf("%d\n",a);
        }
        else{
            printf("%d\n",b);
        }
    }
    return 0;
}