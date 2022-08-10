#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int count=0;
        anon:
        while(n>1){
            if(n%6==0){
                n=n/6;
                count++;
                goto anon;
            }
            else if(n%6!=0){
                n=n*2;
                count++;
                goto anon;
            }
        }
        if(n==1){
            printf("%d\n",count);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}