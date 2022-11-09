#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    int l=1,r=n,x=0; 
    while(l<=r){
        a[x]=l;
        x++;
        a[x]=r;
        x++;
        l++;
        r--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}