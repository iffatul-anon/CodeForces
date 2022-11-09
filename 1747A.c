#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a;
        long long int sum1=0;
        long long int sum2=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a<0){
                sum1=sum1+abs(a);
            }
            else{
                sum2=sum2+a;
            }
        }
        printf("%lld\n",llabs(sum1-sum2));
    }
    return 0;
}