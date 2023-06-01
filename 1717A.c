#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count=n+(n/2+n/3)*2;
        printf("%d\n",count);
    }
    return 0;
}