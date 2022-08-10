#include<stdio.h>
int main(){
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(a==1){
        printf("%lld\n",n*m);
    }
    else if(n==m && n==a && m==a){
        printf("1\n");
    }
    else if(n<a && m<a){
        printf("1\n");
    }
    else if(n!=m && n<=a){
        if(m%a==0){
            m=m/a;
        }
        else{
            m=(m/a)+1;
        }
        printf("%lld\n",m);
    }
    else if(n!=m && m<=a){
        if(n%a==0){
            n=n/a;
        }
        else{
            n=(n/a)+1;
        }
        printf("%lld\n",n);
    }
    else{
    if(n%a==0){
        n=n/a;
    }
    else{
        n=(n/a)+1;
    }
    if(m%a==0){
        m=m/a;
    }
    else{
        m=(m/a)+1;
    }
    printf("%lld\n",n*m);
    }
    return 0;
}