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
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]>a[k]){
                    int tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        int min=1000000000;
        for(int x=1;x<n-1;x++){
            int sum=(a[x]-a[x-1])+(a[x+1]-a[x]);
            if(min>sum){
                min=sum;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}