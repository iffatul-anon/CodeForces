#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000],t[1000000],u[1000000];
    scanf("%s",&s);
    int l=strlen(s);
    int a[27]={0};
    for(int i=0;i<l;i++){
        a[s[i]-96]++;
    }
    int x=0,y=0;
    int j=0;
    for(int i=1;i<27;i++){
        y--;
        while(i>=t[y]-96 && y>=0){
            u[x++]=t[y--];
        }
        y++;
        if(a[i]==0){
            continue;
        }
        for(j=j;j<l;j++){
            if(s[j]-96==i){
                u[x++]=s[j];
                a[i]--;
                if(a[i]==0){
                    j++;
                    break;
                }
            }
            else{
                t[y++]=s[j];
                a[s[j]-96]--;
            }
        }
    }
    for(int i=y-1;i>=0;i--){
        u[x++]=t[i];
    }
    printf("%s\n",u);
    return 0;
}