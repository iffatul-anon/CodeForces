#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        int x=2*n;
        for(int i=0;i<n;i=i+2){
            a[i]=x;
            x=x-2;
        }
        x=2;
        for(int i=1;i<n;i=i+2){
            a[i]=x;
            x=x+2;
        }
        x=1;
        for(int i=0;i<n;i=i+2){
            b[i]=x;
            x=x+2;
        }
        for(int i=1;i<n;i=i+2){
            b[i]=x;
            x=x+2;
        }
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        for(int i=0;i<n;i++){
            printf("%d ",b[i]);
        }
        printf("\n");
    }
    return 0;
}