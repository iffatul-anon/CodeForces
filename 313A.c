#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    char s[11];
    scanf("%d",&n);
    if(n>=0){
        printf("%d\n",n);
    }
    else if(n<0){
        sprintf(s,"%d",n);
        int l=strlen(s);
        char s2[l];
        if(s[l-1]>=s[l-2]){
            for(int i=0;i<l-1;i++){
                s2[i]=s[i];
            }
            printf("%d\n",atoi(s2));
        }
        else{
            for(int i=0;i<l-2;i++){
                s2[i]=s[i];
            }
            s2[l-2]=s[l-1];
            printf("%d\n",atoi(s2));
        }
    }
    
    return 0;
}