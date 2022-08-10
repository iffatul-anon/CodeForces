#include<stdio.h>
int main(){
    int t,n,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n==3 || n==2){
            printf("1\n");
        }
        else if(n==1){
            printf("2\n");
        }
        else{
            a=n%3;
            if(a==0){
                a=n/3;
                printf("%d\n",a);
            }
            else{
                a=n/3;
                printf("%d\n",a+1);
            }
        }
    }
    return 0;
}