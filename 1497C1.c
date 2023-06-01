#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        if(n%2!=0){
            printf("1 %d %d\n",n/2,n/2);
        }
        else if(n%2==0 && (n/2)%2==0){
            printf("%d %d %d\n",n/2,n/4,n/4);
        }
        else if(n%2==0 && (n/2)%2!=0){
            printf("2 %d %d\n",(n-2)/2,(n-2)/2);
        }
    }
    return 0;
}