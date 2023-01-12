#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2!=0){
        printf("0\n");
    }
    else{
        long long int x=pow(2,(n/2));
        printf("%lld\n",x);
    }
    return 0;
}