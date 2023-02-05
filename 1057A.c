#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1],b[n];
    a[0]=0;
    a[1]=0;
    for(int i=2;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int x=0;
    b[x++]=n;
    int i=n;
    while(i!=1){
        b[x++]=a[i];
        i=a[i];
    }
    for(int i=x-1;i>=0;i--){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}