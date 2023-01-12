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
            for(int j=1;j<=n;j++){
                printf("%d ",j);
            }
        }
        else{
            int sum2;
            for(int j=0;j<n;j++){
                sum2=sum-a[j];
                int flag2=0;
                for(int k=2;k<=sum2/2;k++){
                    if(sum2%k==0){
                        flag2=1;
                        break;
                    }
                }
                if(flag2==1){
                    printf("%d\n",n-1);
                    for(int k=0;k<n;k++){
                        if(k==j){
                            continue;
                        }
                        printf("%d ",k+1);
                    }
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}