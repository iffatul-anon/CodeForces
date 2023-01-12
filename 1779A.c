#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int flag=0;
        for(int j=0;j<n;j++){
            if(s[j]=='R'){
                for(int k=j+1;k<n;k++){
                    if(s[k]=='L'){
                        flag=1;
                        break;
                    }
                }
                break;
            }
        }
        if(flag==1){
            printf("0\n");
        }
        else{
            int j;
            for(j=0;j<n-1;j++){
                if(s[j]=='L' && s[j+1]=='R'){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("%d\n",j+1);
            }
            else{
                printf("-1\n");
            }
        }
    }
    return 0;
}