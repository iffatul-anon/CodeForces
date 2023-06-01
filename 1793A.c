#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unsigned long long int a,b,n,m;
        scanf("%llu %llu %llu %llu",&a,&b,&n,&m);
        unsigned long long int x,y,z;
        x=((n/(m+1))*m*a)+((n%(m+1))*a);
        y=n*b;
        z=((n/(m+1))*m*a)+((n%(m+1))*b);
        if(x<=y && x<=z){
            printf("%llu\n",x);
        }
        else if(y<=x && y<=z){
            printf("%llu\n",y);
        }
        else{
            printf("%llu\n",z);
        }
    }
    return 0;
}