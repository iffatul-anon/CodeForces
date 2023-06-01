#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        long long int sum=0,flag=0,count=0;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            if(a!=0 && i!=n-1){
                flag=1;
                sum=sum+a;
            }
            if(flag==1 && a==0 && i!=n-1){
                count++;
            }
        }
        printf("%lld\n",sum+count);
    }
}