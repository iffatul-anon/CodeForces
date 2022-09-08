#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a,sum;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum=5-a;
        if(sum>=k){
            count++;
        }
    }
    printf("%d\n",count/3);
}