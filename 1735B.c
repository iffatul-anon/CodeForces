#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int min=100000000;
        long long int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            sum=sum+a[j];
            if(min>a[j]){
                min=a[j];
            }
        }
        if(min==1){
            printf("%lld\n",sum-n);
        }
        else{
            int x;
            long long int count=0;
            for(int j=0;j<n;j++){
                if(a[j]>=(min*2)){
                    x=a[j]/((min*2)-1);
                    count=count+x;
                    if(a[j]%((min*2)-1)==0){
                        count=count-1;
                    }
                }
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}