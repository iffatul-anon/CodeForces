#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2!=0){
            n=n/2;
        }
        else{
            n=n/2;
            n=n-1;
        }
        printf("%d\n",n);
    }
    return 0;
}