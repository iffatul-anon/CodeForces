#include<stdio.h>
int main(){
    int k,sum=0;
    scanf("%d",&k);
    int a[12];
    for(int i=0;i<12;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum<k){
        printf("-1\n");
    }
    else if(k==0){
        printf("0\n");
    }
    else{
    for(int i=0;i<12;i++){
        for(int j=i+1;j<12;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    int sum1=0,i,count=0;
    for(i=11;i>=0;i--){
        count++;
        sum1=sum1+a[i];
        if(sum1>=k){
            break;
        }
    }
    printf("%d\n",count);
    }
    return 0;
}