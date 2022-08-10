#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s1[n+1];
        char s2[n+1];
        scanf("%s",&s1);
        scanf("%s",&s2);
        int count=0;
        if(s2[0]=='1'){
          if(s1[0]=='0'){
            count++;
          }
          else if(s1[1]=='1'){
            count++;
            s1[1]='2';
          }
        }
        for(int i=1;i<n;i++){
            if(s2[i]=='1'){
              if(s1[i]=='0'){
                count++;
              }
              else if(s1[i-1]=='1'){
                  count++;
                  s1[i-1]='2';
              }  
              else if(s1[i+1]=='1'){
                  count++;
                  s1[i+1]='2';
              }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}