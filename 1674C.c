#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int q;
    char s[51];
    char t[51];
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%s",&s);
        scanf("%s",&t);
        int l=strlen(s);
        int l2=strlen(t);
        if(l2==1 && t[0]=='a'){
            printf("1\n");
        }
        else{
            int flag=0;
            for(int j=0;j<l2;j++){
                if(t[j]=='a'){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("-1\n");
            }
            else{
                long long int anon=pow(2,l);
                printf("%lld\n",anon);
            }
        }
    }
    return 0;
}