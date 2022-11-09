#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        char s1[n+1];
        int k=0;
        scanf("%s",&s);
        for(int j=n-1;j>=0;j--){
            if(s[j]!='0'){
                s1[k]=s[j]-48+'a'-1;
                k++;
            }
            else{
                if(s[j-2]=='1'){
                    s1[k]=s[j-1]-48+'a'+9;
                    k++;
                }
                else if(s[j-2]=='2'){
                    s1[k]=s[j-1]-48+'a'+19;
                    k++;
                }
                j=j-2;
            }
        }
        s1[k]=NULL;
        strrev(s1);
        printf("%s\n",s1);
    }
    return 0;
}