#include<stdio.h>
#include<string.h>
int main(){
    char s[101];
    scanf("%s",&s);
    int l=strlen(s);
    int count=0,i=0;
    for(i=i;i<l;i++){
        if(s[i]=='h'){
            count++;
            break;
        }
    }
    for(i=i+1;i<l;i++){
        if(s[i]=='e'){
            count++;
            break;
        }
    }
    for(i=i+1;i<l;i++){
        if(s[i]=='l'){
            count++;
            break;
        }
    }for(i=i+1;i<l;i++){
        if(s[i]=='l'){
            count++;
            break;
        }
    }
    for(i=i+1;i<l;i++){
        if(s[i]=='o'){
            count++;
            break;
        }
    }
    if(count==5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}