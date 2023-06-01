#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[5];
        scanf("%s",&s);
        int a[10]={0};
        for(int i=0;i<4;i++){
            a[s[i]-48]++;
        }
        int flag1=0,flag2=0;
        for(int i=0;i<10;i++){
            if(a[i]==4){
                flag1=1;
            }
            if(a[i]==3){
                flag2=1;
            }
        }
        if(flag1==1){
            printf("-1\n");
        }
        else if(flag2==1){
            printf("6\n");
        }
        else{
            printf("4\n");
        }
    }
    return 0;
}