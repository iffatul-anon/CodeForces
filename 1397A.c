#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[1001];
        char s2[1001];
        int L=0;
        for(int j=0;j<n;j++){
            scanf("%s",&s);
            int l=strlen(s);
            for(int k=0;k<l;k++){
                s2[L+k]=s[k];
            }
            L=L+l;
        }
        int count;
        int flag=0;
        for(int j=0;j<L;j++){
            count=1;
            for(int k=j+1;k<L;k++){
                if(s2[j]==s2[k]){
                    count++;
                    for(int x=k;x<L-1;x++){
                        s2[x]=s2[x+1];
                    }
                    k--;
                    L--;
                }
            }
            if(count%n!=0){
                flag=1;
                goto anon;
            }
        }
        anon:
        if(flag==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}