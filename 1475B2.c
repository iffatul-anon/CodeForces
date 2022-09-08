#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2020==0 || n%2021==0){
            printf("YES\n");
        }
        else if(n%2020<=n/2020){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}