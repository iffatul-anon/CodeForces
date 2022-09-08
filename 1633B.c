#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[200002];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int count1=0,count2=0;
        for(int j=0;j<l;j++){
            if(s[j]=='0'){
                count1++;
            }
            if(s[j]=='1'){
                count2++;
            }
        }
        if(count1==count2){
            printf("%d\n",count1-1);
        }
        else if(count1>count2){
            printf("%d\n",count2);
        }
        else if(count1<count2){
            printf("%d\n",count1);
        }
    }
    return 0;
}