#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        int flag=0,flag2=0,j;
        for(j=0;j<n;j++){
            if(s[j]=='R'){
                for(int k=j+1;k<n;k++){
                    if(s[k]=='L'){
                        flag=1;
                        break;
                    }
                }
                if(s[j-1]=='L' && j!=0){
                    flag2=1;
                }
                break;
            }
        }
        if(flag==1){
            printf("0\n");
        }
        else if(flag2==1){
            printf("%d\n",j);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}