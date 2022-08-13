#include<stdio.h>
int main(){
    int k,r,a;
    scanf("%d %d",&k,&r);
    if(k%10==0 || k==r || k%10==r){
        printf("1\n");
    }
    else{
        for(int i=2;i<=10;i++){
            a=k*i;
            if(a%10==0 || a%10==r){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}