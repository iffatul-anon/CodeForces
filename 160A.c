#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    int sum1=0,sum2=0,i,count=0;
    for(i=n-1;i>=0;i--){
        count++;
        sum1=sum1+a[i];
        sum2=sum-sum1;
        if(sum1>sum2){
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}