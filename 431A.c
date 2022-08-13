#include<stdio.h>
#include<string.h>
int main(){
    int x1,x2,x3,x4,n=0;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    char s[100001];
    scanf("%s",&s);
    int l=strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]=='1'){
            n=n+x1;
        }
        else if(s[i]=='2'){
            n=n+x2;
        }
        else if(s[i]=='3'){
            n=n+x3;
        }
        else if(s[i]=='4'){
            n=n+x4;
        }
    }
    printf("%d\n",n);
}