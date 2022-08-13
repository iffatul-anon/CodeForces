#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int a,b;
    for(int i=1;i<=n/2;i++){
        a=n-i;
        if(a%i==0){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}