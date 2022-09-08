#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char s1[3];
    char s2[3];
    char s[5];
    for(int i=0;i<t;i++){
        scanf("%s %s",&s1,&s2);
        for(int j=0;j<2;j++){
            s[j]=s1[j];
            s[j+2]=s2[j];
        }
        if(s[0]==s[1] && s[0]==s[2] && s[0]==s[3]){
            printf("0\n");
        }
        else{
        int count=0;
        int n=4;
        for(int x=0;x<n;x++){
            for(int y=x+1;y<n;y++){
                if(s[x]==s[y]){
                    count++;
                    s[y]=s[n-1];
                    n--;
                    y--;
                }
            }
        }
        if(count==0){
            printf("3\n");
        }
        else if(count==1){
            printf("2\n");
        }
        else if(count==2){
            printf("1\n");
        }

        }
    }
    return 0;
}