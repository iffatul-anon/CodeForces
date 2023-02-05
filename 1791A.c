#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char c[2];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&c);
        if(c[0]=='c' || c[0]=='o' || c[0]=='d' || c[0]=='e' || c[0]=='f' || c[0]=='r' || c[0]=='s'){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}