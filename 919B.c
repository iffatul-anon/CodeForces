#include<stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    int count=0;
    int i=19;
    int m,n;
    int sum;
    while(count<k){
        sum=0;
        n=i;
        while(n>0){
            m=n%10;
            n=n/10;
            sum=sum+m;
        }
        if(sum==10){
            count++;
        }
        i++;
    }
    printf("%d\n",i-1);
    return 0;
}