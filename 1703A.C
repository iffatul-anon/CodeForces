#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[4];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",s);
        //strlwr(s);
        int flag1=0,flag2=0,flag3=0;
        for(int j=0;j<3;j++){
            if(s[0]=='y'){
                flag1=1;
            }
            if(s[1]=='e'){
                flag2=1;
            }
            if(s[2]=='s'){
                flag3=1;
            }
        }
        if(flag1==1 && flag2==1 && flag3==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}