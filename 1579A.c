#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char s[51];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int count1=0,count2=0,count3=0;
        for(int j=0;j<l;j++){
            if(s[j]=='A'){
                count1++;
            }
            else if(s[j]=='B'){
                count2++;
            }
            else if(s[j]=='C'){
                count3++;
            }
        }
        if(count1==0){
            if(count2==count3){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else if(count2==0){
            printf("NO\n");
            
        }
        else if(count3==0){
            if(count1==count2){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else if(count1+count3==count2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}