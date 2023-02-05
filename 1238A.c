#include<stdio.h>
int main(){
    long long int t,x,y;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld",&x,&y);
        if(x-y==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}