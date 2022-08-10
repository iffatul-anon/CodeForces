#include<stdio.h>

int main(){
    int x,m,sum=1;

    scanf("%d",&x);

    if(x>=5){
    m=x/5;
    if(x%5==0){
        printf("%d\n",m);
    }
    else{
         sum=sum+m;
         printf("%d\n",sum);
    }
    }
    else{
        printf("%d\n",sum);
    }
    
    return 0; 
}