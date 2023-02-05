#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s1[n+1],s2[n+1];
        scanf("%s",&s1);
        scanf("%s",&s2);
        int flag=0;
        for(int j=0;j<n;j++){
            if(s1[j]=='1' && s2[j]=='1'){
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