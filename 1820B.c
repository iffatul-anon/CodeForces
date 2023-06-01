#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",&s);
        long long int count=1,max=1,flag1=0,flag2=0;
        long long int l=strlen(s);
        for(int i=0;i<l;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=1;
            }
            if(s[i]=='1'){
                flag1=1;
            }
            if(s[i]=='0'){
                flag2=1;
            }
        }
        if(s[0]=='1' && s[l-1]=='1' && flag2==1){
            count=0;
            for(int i=0;i<l;i++){
                if(s[i]=='1'){
                    count++;
                }
                else{
                    break;
                }
            }
            for(int i=l-1;i>=0;i--){
                if(s[i]=='1'){
                    count++;
                }
                else{
                    break;
                }
            }
            if(count>max){
                max=count;
            }
        }
        if(flag1==0){
            printf("0\n");
        }
        else if(flag2==0){
            printf("%lld\n",l*l);
        }
        else if(max==1){
            printf("1\n");
        }
        else if(max%2==0){
            max=max/2;
            printf("%lld\n",max*(max+1));
        }
        else{
            max++;
            max=max/2;
            printf("%lld\n",max*max);
        }
    }
    return 0;
}