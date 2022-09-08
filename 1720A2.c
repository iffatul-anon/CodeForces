#include<stdio.h>
int main(){
    int t;
    long long int a,b,c,d,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        x=a*d;
        y=b*c;
        if(a==0 && c==0){
            printf("0\n");
        }
        else if(a==0 || c==0){
            printf("1\n");
        }
        else if(a%b==0 && c%d==0){
            x=a/b;
            y=c/d;
            if(x==y){
                printf("0\n");
            }
            else if(x%y==0 || y%x==0){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
        else if(x==y){
            printf("0\n");
        }
        else if(x%y==0 || y%x==0){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
    return 0;
}
