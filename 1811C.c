#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n-1;i++){
            scanf("%d",&b[i]);
        }
        a[0]=b[0];
        for(int i=1;i<n-1;i++){
            if(b[i]<=b[i-1]){
                a[i]=b[i];
            }
            else{
                a[i]=b[i-1];
            }
        }
        a[n-1]=b[n-2];
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}