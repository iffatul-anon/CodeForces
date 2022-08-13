#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%7==0){
            printf("%d\n",n);
        }
        else{
            int a=n%7;
            int b=7-a;
            int c=n%10;
            if(c+b>=10){
                printf("%d\n",n-a);
            }
            else{
                printf("%d\n",n+b);
            }
        }
    }
   
    return 0;
}
