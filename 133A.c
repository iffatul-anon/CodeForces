#include<stdio.h>
#include<string.h>
int main(){
    char p[101];
    gets(p);
    int l=strlen(p);
    int flag=0;
    for(int i=0;i<l;i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
  
}