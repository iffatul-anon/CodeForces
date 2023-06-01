#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[1000000];
        scanf("%s",&s);
        int l=strlen(s);
        if(l==1){
            printf("Bob %d\n",s[0]-96);
        }
        else{
            long long int sum=0;
            for(int i=0;i<l;i++){
                sum=sum+(s[i]-96);
            }
            if(l%2==0){
                printf("Alice %lld\n",sum);
            }
            else if(s[0]>s[l-1]){
                printf("Alice %lld\n",sum-(2*(s[l-1]-96)));
            }
            else{
                printf("Alice %lld\n",sum-(2*(s[0]-96)));
            }
        }
    }
    return 0;
}