#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    int count=0,count2=0;
    for(int i=0;i<n;i++){
        if(s[i]!='x'){
            count=0;
            continue;
        }
        if(s[i]=='x'){
            count++;
        }
        if(count==3){
            count--;
            count2++;
        }
    }
    printf("%d\n",count2);

    return 0;
}