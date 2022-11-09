#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int p[n];
        for(int j=0;j<n;j++){
            scanf("%d",&p[j]);
        }
        int flag=0;
        for(int x=1;x<n-1;x++){
            if(p[x-1]<p[x] && p[x]>p[x+1]){    
                flag=1;
                printf("YES\n");
                printf("%d %d %d\n",x,x+1,x+2);
                goto anon;
            }
        }
        anon:
        if(flag==0){
            printf("NO\n");
        }
    }
    return 0;
}