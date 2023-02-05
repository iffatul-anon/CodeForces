#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        for(int j=1;j<n;j++){
            if(s[j]=='?'){
                if(s[j-1]=='R'){
                    s[j]='B';
                }
                else if(s[j-1]=='B'){
                    s[j]='R';
                }
            }
        }
        if(s[n-1]=='?'){
            for(int j=0;j<n;j++){
                if(j%2==0){
                    printf("R");
                }
                else{
                    printf("B");
                }
            }
            printf("\n");
        }
        else{
            for(int j=n-1;j>=0;j--){
                if(s[j]=='?'){
                    if(s[j+1]=='R'){
                        s[j]='B';
                    }
                    else if(s[j+1]=='B'){
                        s[j]='R';
                    }
                }
            }
            printf("%s\n",s);
        }
    }
    return 0;
}