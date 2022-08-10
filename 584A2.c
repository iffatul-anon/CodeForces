#include<stdio.h>
int main(){
    int n,t,flag=0;
    scanf("%d %d",&n,&t);
    long long int i,a=1,b;
    if(n==1){
        goto anon;
    }
    else{
    for(int i=1;i<n;i++){
        a=a*10;
    }
    }
    anon:
    b=a*10;
    for(i=a;i<b;i++){
        if(i%t==0){
            printf("%lld\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("-1\n");
    }
    return 0;
}