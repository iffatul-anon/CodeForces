#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a;
        int flag=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            if(i>=a){
                flag=1;
            }
        }
        if(flag==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}