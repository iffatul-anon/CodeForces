#include<stdio.h>
int main(){
    int t,n,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            sum=sum+a[j];
        }
        int flag=0;
        for(int j=2;j<=sum/2;j++){
            if(sum%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d\n",n);
            for(int j=0;j<n;j++){
                printf("%d ",j+1);
            }
        }
        else{
            int sum2;
            for(int j=0;j<n;j++){
                sum2=sum-a[j];
                int flag=0;
                for(int j=2;j<=sum2/2;j++){
                    if(sum2%j==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    printf("%d\n",n-1);
                    for(int j=0;j<n-1;j++){
                        printf("%d ",j+1);
                    }
                    break;
                }
            }
        }
    }
    return 0;
}