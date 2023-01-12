#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,a=0;
    while(sum<=n){
        a++;
        sum=sum+a;
    }
    if(a>1){
        a--;
    }
    printf("%d\n",a);
    for(int i=1;i<a;i++){
        printf("%d ",i);
    }
    printf("%d\n",n-(sum-a-a-1));
    return 0;
}