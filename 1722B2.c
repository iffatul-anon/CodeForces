#include<stdio.h>
#include<string.h>
int main (){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s1[n+1];
        char s2[n+1];
        scanf("%s",&s1);
        scanf("%s",&s2);
        int flag=0;
        for(int j=0;j<n;j++){
            if(s1[j]==s2[j] || (s1[j]=='B' && s2[j]=='G') || (s1[j]=='G' && s2[j]=='B')){
                continue;
            }
            else{
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
    return 0;
}