#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[101];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int count0=0,count1=0;
        int start,end;
        for(int j=0;j<l;j++){
            if(s[j]=='0'){
                count0++;
            }
            if(count1==0 && s[j]=='1'){
                start=j+1;
            }
            if(s[j]=='1'){
                count1++;
                end=j+1;
            }
        }
        if(count0==0 || count1==0){
            printf("0\n");
        }
        else{
            printf("%d\n",count0-(l-end)-(start-1));
        }   
    }
    return 0;
}