#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[10];
        scanf("%s",s);
        if(s[0]=='0'){
            printf("0\n");
        }
        else{
            int l=strlen(s);
            int count=0;
            for(int i=1;i<l;i++){
                if(s[i]=='?'){
                    count++;
                }
            }
            if(s[0]=='?'){
                printf("%.0f\n",pow(10,count)*9);
            }
            else{
                printf("%.0f\n",pow(10,count));
            }
        }
    }
    return 0;
}