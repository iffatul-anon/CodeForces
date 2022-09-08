#include<stdio.h>
int main(){
    int n,k,i,j,l,tem;
    scanf("%d %d",&n,&k);
    int a[n];
    int b[n];
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
        sum=sum+a[i];
    }
    if(sum<=k){
        printf("%d\n",n);
        for(i=0;i<n;i++){
            printf("%d ",i+1);
        }
    }
    else{
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    tem=a[i];
                    a[i]=a[j];
                    a[j]=tem;
                }
            }
        }
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+a[i];
            if(sum>k){
                break;
            }
        }
        printf("%d\n",i);
        for(j=0;j<i;j++){
            for(l=0;l<n;l++){
                if(a[j]==b[l]){
                    printf("%d ",l+1);
                    b[l]=-1;
                    break;
                }
            }
        }
    }
}