#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s1[n][4],s2[n][4],s3[n][4];
        for(int i=0;i<n;i++){
            scanf("%s",&s1[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%s",&s2[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%s",&s3[i]);
        }
        int a=0,b=0,c=0;
        int flag2,flag3;
        for(int i=0;i<n;i++){
            flag2=0;
            for(int j=0;j<n;j++){
                if(strcmp(s1[i],s2[j])==0){
                    s2[j][0]='0';
                    flag2=1;
                    break;
                }
            }
            flag3=0;
            for(int j=0;j<n;j++){
                if(strcmp(s1[i],s3[j])==0){
                    s3[j][0]='0';
                    flag3=1;
                    break;
                }
            }
            if(flag2==0 && flag3==0){
                a=a+3;
            }
            else if(flag2==1 && flag3==0){
                a++;
                b++;
            }
            else if(flag2==0 && flag3==1){
                a++;
                c++;
            }
        }
        for(int i=0;i<n;i++){
            if(s2[i][0]=='0'){
                continue;
            }
            flag3=0;
            for(int j=0;j<n;j++){
                if(strcmp(s2[i],s3[j])==0){
                    s3[j][0]='0';
                    flag3=1;
                    break;
                }
            }
            if(flag3==1){
                b++;
                c++;
            }
            else{
                b=b+3;
            }
        }
        for(int i=0;i<n;i++){
            if(s3[i][0]=='0'){
                continue;
            }
            c=c+3;
        }
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}