#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        char s2[n+1],s3[n+1];
        int flag=0;
        for(int i=0;i<(2*n-2);i++){
            scanf("%s",&s);
            int l=strlen(s);
            if(l==n-1 && flag==0){
                for(int j=0;j<l;j++){
                    s2[j]=s[j];
                }
                s2[l]='\0';
                flag=1;
            }
            if(l==n-1 && flag==1){
                for(int j=0;j<l;j++){
                    s3[j]=s[j];
                }
                s3[l]='\0';
            }
        }
        for(int i=0;i<(n-1)/2;i++){
            char c=s2[i];
            s2[i]=s2[n-i-2];
            s2[n-i-2]=c;
        }
        if(strcmp(s2,s3)==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}