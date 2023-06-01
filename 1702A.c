#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int m;
        scanf("%d",&m);
        if(m>=1000000000){
            printf("%d\n",m-1000000000);
        }
        else if(m>=100000000){
            printf("%d\n",m-100000000);
        }
        else if(m>=10000000){
            printf("%d\n",m-10000000);
        }
        else if(m>=1000000){
            printf("%d\n",m-1000000);
        }
        else if(m>=100000){
            printf("%d\n",m-100000);
        }
        else if(m>=10000){
            printf("%d\n",m-10000);
        }
        else if(m>=1000){
            printf("%d\n",m-1000);
        }
        else if(m>=100){
            printf("%d\n",m-100);
        }
        else if(m>=10){
            printf("%d\n",m-10);
        }
        else if(m>=1){
            printf("%d\n",m-1);
        }
    }
    return 0;
}