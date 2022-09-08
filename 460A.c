#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int b=1;
    while(b<n){
        b++;
        if(b%m==0){
            n++;
        }
    }
    printf("%d\n",b);

    
    return 0;
}