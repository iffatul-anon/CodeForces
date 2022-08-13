#include<stdio.h>
int main(){
    int t,a,b,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&n);
        int count=0;
        if(a>b){
            int tem=a;
            a=b;
            b=tem;
        }
        anon2:
        a = a + b;
        count++;
        if(a>n){
            goto anon;
        }
        b = b + a;
        count++;
        if(b>n){
            goto anon;
        }
        goto anon2;
        anon:
        printf("%d\n",count);

    }
    return 0;
}