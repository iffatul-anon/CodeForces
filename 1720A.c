#include<stdio.h>
int main(){
    int t;
    long long int a,b,c,d,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        x=a*d;
        y=b*c;
        if(x==y){
            printf("0\n");
        }
        else if(x==0 || y==0){
            printf("1\n");
        }
        else if(y%x==0 || x%y==0){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
    return 0;
}
