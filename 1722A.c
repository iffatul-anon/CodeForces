#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int x=0;x<t;x++){
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    if(n!=5){
        printf("NO\n");
    }
    else{
        int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
        for(int i=0;i<n;i++){
        if(s[i]=='T'){
            flag1=1;
        }
        if(s[i]=='i'){
            flag2=1;
        }
        if(s[i]=='m'){
            flag3=1;
        }
        if(s[i]=='u'){
            flag4=1;
        }
        if(s[i]=='r'){
            flag5=1;
        }
    }
    if(flag1==1 && flag2==1 && flag3==1 && flag4==1 && flag5==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    }

    return 0;
}