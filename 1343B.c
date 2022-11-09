#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%4!=0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            int x=2;
            int y=1;
            int sum1=0;
            int sum2=0;
            for(int j=1;j<=n/2;j++){
                printf("%d ",x);
                sum1=sum1+x;
                x=x+2;
            }
            for(int j=1;j<n/2;j++){
                printf("%d ",y);
                sum2=sum2+y;
                y=y+2;
            }
            printf("%d\n",sum1-sum2);
        }
    }
    return 0;
}