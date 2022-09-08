#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int m=1;m<=1000;m++){
        int sum=(n*m)+1;
        int flag=0;
        for(int i=2;i<=sum/2;i++){
            if(sum%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("%d\n",m);
            break;
        }
    }
    return 0;
}