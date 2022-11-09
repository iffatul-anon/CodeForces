#include<stdio.h>
int main(){
    long long int t,x,y,a,b,sum1,sum2;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld",&x,&y);
        scanf("%lld %lld",&a,&b);
        if(x==0 && y==0){
            printf("0\n");
        }
        else if(x==0){
            printf("%lld\n",y*a);
        } 
        else if(y==0){
            printf("%lld\n",x*a);
        }
        else{
            if(x<y){
                sum2=(x*b)+((y-x)*a);
            }
            else{
                sum2=(y*b)+((x-y)*a);
            }
            sum1=(x+y)*a;
            if(sum1<sum2){
                printf("%lld\n",sum1);
            }
            else{
                printf("%lld\n",sum2);
            }
        }
    }
    return 0; 
}