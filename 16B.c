#include<stdio.h>
int main(){
    int n,m,sum=0,sum1=0;
    scanf("%d %d",&n,&m);
    int a[m],b[m];
    for(int i=0;i<m;i++){
        scanf("%d %d",&a[i],&b[i]);
        sum=sum+a[i];
        sum1=sum1+(a[i]*b[i]);
    }
    if(sum<=n){
        printf("%d\n",sum1);
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                if(b[i]>b[j]){
                    int tem=a[i];
                    int tem1=b[i];
                    a[i]=a[j];
                    b[i]=b[j];
                    a[j]=tem;
                    b[j]=tem1;
                }
            }
        }
        int sum2=0,i;
        for(i=m-1;i>=0;i--){
            sum2=sum2+a[i];
            if(n<=sum2){
                break;
            }
        }
        int sum3=0;
        if(n<sum2){
            sum2=sum2-n;
            sum3=sum3-(sum2*b[i]);
        }
        for(i=i;i<m;i++){
            sum3=sum3+(a[i]*b[i]);
        }
        printf("%d\n",sum3);
    }
    return 0;
}