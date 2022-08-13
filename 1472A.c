#include<stdio.h>
int main(){
    int t,w,h,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&w,&h,&n);
        int count=1;
        anon:
        if(w%2!=0 && h%2!=0){
            goto anon2;
        }
        if(w%2==0){
            count=count*2;
            w=w/2;
        }
        if(h%2==0){
            count=count*2;
            h=h/2;
        }
        goto anon;
        anon2:
        if(count>=n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}