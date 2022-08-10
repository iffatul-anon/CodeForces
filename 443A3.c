#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    gets(s);
    int d=strlen(s);
    if(d<3){
        printf("0\n");
    }
    else if(d==3){
        printf("1\n");
    }
    else{
    int count=0;
    for(int i=1;i<d-1;i=i+3){
        for(int j=i+3;j<d-1;j=j+3){
            if(s[i]==s[j]){
                count++;
                break;
            }
        }
    }
    d=d-3;
    d=d/3;
    d=d+1;
    d=d-count;
    printf("%d\n",d);
    }
    return 0;
}