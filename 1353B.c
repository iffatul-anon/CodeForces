#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
        }
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]>a[k]){
                    int tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(b[j]<b[k]){
                    int tem=b[j];
                    b[j]=b[k];
                    b[k]=tem;
                }
            }
        }
        int x;
        int sum=0;
        for(x=0;x<k;x++){
            if(a[x]>=b[x]){
                sum=sum+a[x];
            }
            else{
                sum=sum+b[x];
            }
        }
        for(x=x;x<n;x++){
            sum=sum+a[x];
        }
        printf("%d\n",sum);
    }
    return 0;
}