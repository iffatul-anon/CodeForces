#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        if(n%2==0){
            int flag=0;
            for(int j=1;j<n;j=j+2){
                if(s[j]=='0' || s[j]=='2' || s[j]=='4' || s[j]=='6' || s[j]=='8'){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("2\n");
            }
            else{
                printf("1\n");
            }
        }
        else{
            int flag=0;
            for(int j=0;j<n;j=j+2){
                if(s[j]=='1' || s[j]=='3' || s[j]=='5' || s[j]=='7' || s[j]=='9'){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }
    return 0;
}