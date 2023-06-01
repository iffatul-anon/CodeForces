#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        long long int sum=0;
        for(int i=0;i<n-1;i++){
            b[i]=a[i+1]-a[i];
            if(i%2==0){
                sum=sum+b[i];
            }
        }
        if(n%2==0 && sum<0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}