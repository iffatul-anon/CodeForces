#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int l=1,h=1000000;
    while(l<h){
        int mid=(l+h+1)/2;
        printf("%d\n",mid);
        fflush(stdout);
        char s[5];
        scanf("%s",&s);
        if(s[0]=='<'){
            h=mid-1;
        }
        else{
            l=mid;
        }
    }
    printf("! %d\n",l);
    fflush(stdout);
    return 0;
}