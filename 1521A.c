#include<stdio.h>
int main(){
    long long int t,a,b,x,y,z;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld",&a,&b);
        if(b==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            printf("%lld %lld %lld\n",a*b,a,(a*b)+a);
        }
    }
    return 0;
}