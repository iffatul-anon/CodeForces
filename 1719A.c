#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        if(n%2==0 && m%2==0){
            printf("Tonya\n");
        }
        else if(n%2==0 && m%2!=0){
            printf("Burenka\n");
        }
        else if(n%2!=0 && m%2==0){
            printf("Burenka\n");
        }
        else if(n%2!=0 && m%2!=0){
            printf("Tonya\n");
        }
    }
    return 0;
}