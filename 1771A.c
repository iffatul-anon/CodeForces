#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int max=0,min=100000;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(max<a[j]){
                max=a[j];
            }
            if(min>a[j]){
                min=a[j];
            }
        }
        if(max==min){
            printf("%lld\n",n*(n-1LL));
        }
        else{
            int countmax=0,countmin=0;
            for(int j=0;j<n;j++){
                if(max==a[j]){
                    countmax++;
                }
                if(min==a[j]){
                    countmin++;
                }
            }
            printf("%lld\n",2LL*countmax*countmin);
        }
    }
}