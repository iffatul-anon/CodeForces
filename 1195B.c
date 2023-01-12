#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int x=1;
    int a=0;
    for(int i=1;i<=n;i++){
        a=a+x;
        x++;
        if(a-k==n-i){
            printf("%d\n",n-i);
            break;
        }
    }
    return 0;
}