#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[51];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int count=0;
        for(int j=0;j<l;j++){
            int flag=0;
            for(int k=j+1;k<l;k++){
                if(s[j]==s[k]){
                    flag=1;
                    for(int x=k;x<l-1;x++){
                        s[x]=s[x+1];
                    }
                    k--;
                    l--;
                }
            }
            if(flag==1){
                count++;
            }
        }
        int n=l+count;
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n-1)/2;
        }
        printf("%d\n",n);
    }
    return 0;
}