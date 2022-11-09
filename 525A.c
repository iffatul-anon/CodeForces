#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[2*n];
    scanf("%s",&s);
    char s1[n];
    char s2[n];
    int x=0;
    for(int i=0;i<(n*2)-2;i=i+2){
        if(s[i]==(s[i+1]+32)){
            continue;
        }
        s1[x]=s[i];
        s2[x]=s[i+1];
        x++;
    }
    int count=0;
    for(int i=0;i<x;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if((s2[i]+32)==s1[j]){
                s1[j]=0;
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}