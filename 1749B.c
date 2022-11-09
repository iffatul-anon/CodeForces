#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a,b[n];
        long long int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            sum=sum+a;
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
        }
        int m=n;
        for(int j=0;j<m-1;j++){
            if(b[0]>=b[n-1]){
                sum=sum+b[n-1];
            }
            else{
                sum=sum+b[0];
                b[0]=b[n-1];
            }
            n--;
        }
        printf("%lld\n",sum);
    }
    return 0;
}