#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        n=n-3;
        n=n/3;
        n=n-1;
        printf("%d\n",n);
    }
    return 0;
}