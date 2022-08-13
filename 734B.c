#include<stdio.h>
int main(){
    int k2,k3,k5,k6;
    int sum=0;
    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
    if(k2<=k5 && k2<=k6){
        sum=(256*k2);
        printf("%d\n",sum);
        goto anon;
    }
    else if(k5<=k2 && k5<=k6){
        sum=(256*k5);
        k2=k2-k5;
    }
    else if(k6<=k5 && k6<=k2){
        sum=(256*k6);
        k2=k2-k6;
    }
    if(k2==0){
        printf("%d\n",sum);
    }
    else{
        if(k2<=k3){
            sum=sum+(32*k2);
        }
        else if(k2>k3){
            sum=sum+(32*k3);
        }
        printf("%d\n",sum);
    }
    anon:
    
    return 0;
}