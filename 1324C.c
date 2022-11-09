#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[200000];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int flag=0;
        int a=0;
        int b=l+1;
        int sub=0;
        int max=0;
        for(int j=l-1;j>=0;j--){
            if(s[j]=='R'){
                flag=1;
                a=j+1;
                sub=b-a;
                b=a;
                if(max<sub){
                    max=sub;
                }
            }
        }
        sub=b-0;
        if(max<sub){
            max=sub;
        }
        if(flag==0){
            printf("%d\n",l+1);
        }
        else{
            printf("%d\n",max);
        }
    }
    return 0;
}