#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int count=1;
        for(int j=1;j<n;j++){
            if(s[j]!=s[j-1]){
                count++;
            }
        }
        if(count==1){
            printf("0\n");
        }
        else if(count==2 && s[n-1]=='1'){
            printf("0\n");
        }
        else if(count==2 && s[n-1]=='0'){
            printf("1\n");
        }
        else if(count%2!=0 && s[n-1]=='0'){
            printf("%d\n",count-2);
        }
        else if(count%2==0 && s[0]=='0'){
            printf("%d\n",count-2);
        }
        else{
            printf("%d\n",count-1);
        }
    }
    return 0;
}