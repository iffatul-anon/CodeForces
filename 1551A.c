#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a=n/3;
        int b=n/3;
        if(n%3==1){
            a++;
        }
        else if(n%3==2){
            b++;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}