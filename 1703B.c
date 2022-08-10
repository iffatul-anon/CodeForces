#include<stdio.h>
#include<string.h>
int main(){
    int  t,n,count,l,i,j,k,o;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        l=n;
        count=0;
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                if(s[j]==s[k]){
                    for(o=k;o<n-1;o++){
                    s[o]=s[o+1];
                    }
                    count++;
                    n--;
                    k--;
                }
            }
        }
        l=l-count;
        l=l*2;
        l=l+count;
        printf("%d\n",l);
    }
    
    return 0;
}