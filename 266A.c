#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s);
    int count=0;
    i=0;
    anon:
    for(i=i;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i]==s[j]){
                count++;
                for(k=j;k<n-1;k++){
                    s[k]=s[k+1];
                }
                j--;
                n--;
            }
            else{
                i++;
                goto anon;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}