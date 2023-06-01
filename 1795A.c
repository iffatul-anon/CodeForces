#include<stdio.h>
#include<string.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        char s1[n+m+1],s2[m+1];
        scanf("%s",&s1);
        scanf("%s",&s2);
        char s3[m+1];
        int x=0;
        for(int j=m-1;j>=0;j--){
            s3[x++]=s2[j];
        }
        strcat(s1,s3);
        int count=0;
        for(int j=0;j<n+m;j++){
            if(s1[j]==s1[j+1]){
                count++;
            }
        }
        if(count<2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}