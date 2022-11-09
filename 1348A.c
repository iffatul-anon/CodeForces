#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int sum1=0,sum2=0;
        if(n==2){
            printf("2\n");
        }
        else{
            int i;
            for(i=1;i<=(n/2)-1;i++){
                sum1=sum1+pow(2,i);
            }
            for(i=i;i<=n-1;i++){
                sum2=sum2+pow(2,i);
            }
            sum1=sum1+pow(2,n);
            printf("%d\n",sum1-sum2);
        }
    }
    return 0;
}