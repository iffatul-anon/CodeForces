#include<stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int flag=0;
        for(int j=2;j<=a && j<=b;j++){
            if(a%j==0 && b%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("Infinite\n");
        }
        else{
            printf("Finite\n");
        }
    }
    return 0;
}