#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int m=n;
        int count=0;
        int sum1=0,sum2=0;
        int x=0;
        while (m-x>0){
            if(sum1>=sum2){
                sum2=sum2+a[m-1];
                m--;
            }
            else{
                sum1=sum1+a[x];
                x++;
            }
            if(sum1==sum2){
                count=n-m+x;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}