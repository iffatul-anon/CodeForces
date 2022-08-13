#include<stdio.h>
#include<string.h>
int main(){
    int t,l;
    char s[101];
    char s2[101],s3[101];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        l=strlen(s);
        if(l%2!=0){
            printf("NO\n");
        }
        else{
            l=l/2;
            for(int j=0;j<l;j++){
                s2[j]=s[j];
                s3[j]=s[l+j];
            }
            int flag=0;
            for(int x=0;x<l;x++){
                if(s2[x]!=s3[x]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}