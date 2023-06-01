#include<stdio.h>
#include<string.h>
int main(){
    long long int n,x=0,d;
    char c[5];
    scanf("%lld %lld",&n,&x);
    long long int count=0;
    for(int i=0;i<n;i++){
        scanf("%s",c);
        scanf("%lld",&d);
        if(c[0]=='+'){
            x=x+d;
        }
        else{
            if(x>=d){
                x=x-d;
            }
            else{
                count++;
            }
        }
    }
    printf("%lld %lld\n",x,count);
    return 0;
}