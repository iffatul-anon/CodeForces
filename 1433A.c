#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    char s[5];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    scanf("%s",&s);
    int l=strlen(s);
    if(l==1){
        n=1;
    }
    else if(l==2){
        n=3;
    }
    else if(l==3){
        n=6;
    }
    else if(l==4){
        n=10;
    }
    if(s[0]=='1'){  
        n=n;
    }
    else if(s[0]=='2'){
        n=10+n;
    }
    else if(s[0]=='3'){
        n=20+n;
    }
    else if(s[0]=='4'){
        n=30+n;
    }
    else if(s[0]=='5'){
        n=40+n;
    }
    else if(s[0]=='6'){
        n=50+n;
    }
    else if(s[0]=='7'){
        n=60+n;
    }
    else if(s[0]=='8'){
        n=70+n;
    }
    else if(s[0]=='9'){
        n=80+n;   
    }
    printf("%d\n",n);
    }
}