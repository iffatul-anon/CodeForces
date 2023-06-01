#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        char s[n+1];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%s",s);
        int anon[100]={0};
        int flag=0;
        for(int i=0;i<n;i++){
            if(anon[a[i]]==0){
                anon[a[i]]=s[i];
            }
            else if(anon[a[i]]!=s[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}