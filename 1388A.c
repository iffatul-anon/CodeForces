#include<stdio.h>
int main(){
    long long int t,n,x1,x2,x3,x4;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        x1=6;
        x2=10;
        x3=14;
        x4=0;
        if(n>44){
            x4=n-30;
            printf("YES\n");
            printf("%lld %lld %lld %lld\n",x1,x2,x3,x4);
        }
        else if(n<31){
            printf("NO\n");
        }
        else{
            x4=n-30;
            if(x4==6){
                x3=15;
                x4=x4-1;
                printf("YES\n");
                printf("%lld %lld %lld %lld\n",x1,x2,x3,x4);

            }
            else if(x4==10){
                x2=15;
                x4=x4-5;
                printf("YES\n");
                printf("%lld %lld %lld %lld\n",x1,x2,x3,x4);
            }
            else if(x4==14){
                x3=15;
                x4=x4-1;
                printf("YES\n");
                printf("%lld %lld %lld %lld\n",x1,x2,x3,x4);
            }
            else{
                printf("YES\n");
                printf("%lld %lld %lld %lld\n",x1,x2,x3,x4);
            }
        }
        
    }
    return 0;
}