#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=1;i<n;i++){
        if((a[i]+a[i-1])<k){
            sum=sum+k-(a[i]+a[i-1]);
            a[i]=a[i]+k-(a[i]+a[i-1]);
        }
    }
    printf("%d\n",sum);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}