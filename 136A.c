#include<stdio.h>
int main(){
    int n,b;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        a[b-1]=i+1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}