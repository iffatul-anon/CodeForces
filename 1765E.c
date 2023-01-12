#include<stdio.h>
int main(){
    int t,n,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&a,&b);
        if(a>b){
            printf("1\n");
        }
        else{
            if(n%a==0){
                printf("%d\n",n/a);
            }
            else{
                printf("%d\n",(n/a)+1);
            }
        }
    }
    return 0;
}