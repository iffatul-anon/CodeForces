#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int s[n];
        int min=2049;
        for(int j=0;j<n;j++){
            scanf("%d",&s[j]);
            if(min>s[j]){
                min=s[j];
            }
        }
        int x=s[0];
        for(int anon=0;anon<12;anon++){
        for(int j=0;j<n;j++){
            if(s[j]==0){
                continue;
            }
            if(s[j]==2048){
                x=s[j];
                break;
            }
            for(int k=j+1;k<n;k++){
                if(s[k]==0){
                    continue;
                }
                if(s[j]==s[k]){
                    s[k]=s[j]+s[k];
                    s[j]=0;
                    x=s[k];
                    break;
                }
            }
            if(x==2048){
                break;
            }
        }
            if(x==2048){
                break;
            }
        }
        if(x==2048){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
  return 0;
}