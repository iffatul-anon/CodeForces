#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],b[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
        }
        int j,k=n,count=0;
        for(j=n-1;j>=0;j--){
            for(k=k-1;k>=0;k--){
                if(b[j]==a[k]){
                    count++;
                    break;
                }
            }
            if(k==0){
                break;
            }
        }
        printf("%d\n",n-count);
    }
    return 0;
}
