#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int p[n+1];
        int count=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&p[i]);
            if(abs(i-p[i])%k!=0){
                count++;
            }
        }
        if(count==0){
            printf("0\n");
        }
        else if(count==2){
            printf("1\n");
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}