#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n%28;
    int count=(n/28)*4;
    int a[28]={0,0,0,0,1,0,0,0,2,0,0,1,3,0,0,2,4,0,1,3,5,0,2,4,6,1,3,5};
    int b[28]={0,0,0,0,0,0,0,1,0,0,0,1,0,0,2,1,0,0,2,1,0,3,2,1,0,3,2,1};
    while(a[m]+b[m]==0 && count && m){
        count--;
        m=m+7;
    }
    if(a[m]+b[m]+count==0){
        printf("-1\n");
        return 0;
    }
    while(a[m]--){
        printf("4");
    }
    count=count+b[m];
    while(count--){
        printf("7");
    }
    printf("\n");
    return 0;
}