#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int sum;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i==0){
                sum=a[i];
            }
            else{
                sum=sum^a[i];
            }
        }
        int i;
        for(i=0;i<256;i++){
            sum=a[0]^i;
            for(int j=1;j<n;j++){
                sum=sum^(a[j]^i);
            }
            if(sum==0){
                break;
            }
        }
        if(i<256){
            printf("%d\n",i);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
