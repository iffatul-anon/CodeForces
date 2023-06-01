#include<stdio.h>
#include<string.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,k;
        scanf("%d %d",&n,&k);
        char s[n+1],t[n+1];
        scanf("%s %s",&s,&t);
        if(strcmp(s,t)==0){
            printf("YES\n");
        }
        else if(n<4){
            printf("NO\n");
        }
        else{
            int a[27]={0},b[27]={0};
            int flag=0;
            for(int i=0;i<n;i++){
                a[s[i]-96]++;
            }
            for(int i=0;i<n;i++){
                b[t[i]-96]++;
            }
            for(int i=0;i<27;i++){
                if(a[i]!=b[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("NO\n");
            }
            else if(n==4){
                if(s[1]==t[1] && s[2]==t[2]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else if(n==5){
                if(s[2]==t[2]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("YES\n");
            }
        }
    }
    return 0;
}