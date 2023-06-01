#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        char s[m+1];
        for(int i=0;i<m;i++){
            s[i]='B';
        }
        s[m]='\0';
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            if(s[a-1]=='A'){
                s[m+1-a-1]='A';
            }
            else if(s[m+1-a-1]=='A'){
                s[a-1]='A';
            }
            else if(a<=(m+1-a)){
                if(s[a-1]=='B'){
                    s[a-1]='A';
                }
                else{
                    s[m+1-a-1]='A';
                }
            }
            else{
                if(s[m+1-a-1]=='B'){
                    s[m+1-a-1]='A';
                }
                else{
                    s[a-1]='A';
                }
            }
        }
        printf("%s\n",s);
    }
    return 0;
}