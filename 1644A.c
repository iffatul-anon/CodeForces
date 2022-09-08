#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[7];
        scanf("%s",&s);
        int flag1=0,flag2=0,flag3=0;
        int count1=0,count2=0,count3=0;
        for(int j=0;j<6;j++){
            if(s[j]=='r'){
                flag1=1;
            }
            if(s[j]=='g'){
                flag2=1;
            }
            if(s[j]=='b'){
                flag3=1;
            }
            if(s[j]=='R'){
                if(flag1==1){
                    count1=1;;
                    continue;
                }
                else{
                    break;
                }
            }
            if(s[j]=='G'){
                if(flag2==1){
                    count2=1;
                    continue;
                }
                else{
                    break;
                }
            } 
            if(s[j]=='B'){
                if(flag3==1){
                    count3=1;
                    continue;
                }
                else{
                    break;
                }
            }
        }
        if(count1==1 && count2==1 && count3==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}