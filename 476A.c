#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n<m){
        printf("-1\n");
    }
    else{
        if(n%2==0){
            int a=n/2;
            while(a%m!=0){
                a=a+1;
            }
            printf("%d\n",a);
        }
        else{
            int a=(n/2)+1;
            while(a%m!=0){
                a=a+1;
            }
            printf("%d\n",a);
        }
    }
    return 0;
}