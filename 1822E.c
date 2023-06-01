#include <stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int x=0;
        int a[27]={0};
        for(int i=0;i<n;i++){
            a[s[i]-96]++;
        }
        for(int i=0;i<27;i++){
            if(x<a[i]){
                x=a[i];
            }
        }
        if(n%2!=0 || x>n/2){
            printf("-1\n");
        }
        else{
            int count=0;
            int b[27]={0};
            for(int i=0;i<n/2;i++){
                if(s[i]==s[n-i-1]){
                    b[s[i]-96]++;
                    count++;
                }
            }
            x=0;
            for(int i=0;i<27;i++){
                if(x<b[i]){
                    x=b[i];
                }
            }
            if(x<=count/2){
                printf("%d\n",(count+1)/2);
            }
            else{
                printf("%d\n",(count-x)+(x-(count-x)));
            }
        }
    }
    return 0;
}