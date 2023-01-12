#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=0;
    for(int i=2;i<a;i++){
        int x=a;
        int sum=0;
        while(x!=0){
            sum=sum+(x%i);
            x=x/i;
        }
        n=n+sum;
    }
    a=a-2;
    int x;
    if(a>n){
        x=n;
    }
    else{
        x=a;
    }
    while(n%x!=0 || a%x!=0){
        x--;
    }
    n=n/x;
    a=a/x;
    printf("%d/%d\n",n,a);
    return 0;
}