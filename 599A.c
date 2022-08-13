#include<stdio.h>
int main(){
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);
    int sum1=d1+d2+d3;
    int sum2=d1+d1+d2+d2;
    int sum3=d1+d3+d3+d1;
    int sum4=d2+d3+d3+d2;
    if(sum1<=sum2 && sum1<=sum3 && sum1<=sum4){
        printf("%d\n",sum1);
    }
    else if(sum2<=sum1 && sum2<=sum3 && sum2<=sum4){
        printf("%d\n",sum2);
    }
    else if(sum3<=sum1 && sum3<=sum2 && sum3<=sum4){
        printf("%d\n",sum3);
    }
    else if(sum4<=sum1 && sum4<=sum2 && sum4<=sum3){
        printf("%d\n",sum4);
    }
    
    
    return 0;
}