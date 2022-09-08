#include<stdio.h>
#include<string.h>
int main(){
    char n[100000];
    int count=0;
    scanf("%s",&n);
    int l=strlen(n);
    int sum;
    while(l!=1){
        count++;
        sum=0;
        for(int i=0;i<l;i++){
            sum=sum+(n[i]-'0');
        }
        sprintf(n,"%d",sum);
        l=strlen(n);
    }
    printf("%d\n",count);
    
}