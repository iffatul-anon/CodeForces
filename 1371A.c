#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n<=2){
            printf("1\n");
        }
        else if(n%2==0){
            printf("%d\n",n/2);
        }
        else if(n%2!=0){
            printf("%d\n",n/2+1);
        }
    }
}