#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        long long int n; 
        scanf("%lld", &n);
        if(n % 2 == 0){
            printf("2 %lld 1\n", n - 3);
        }
        else if(n % 4 == 1){
            printf("%lld %lld 1\n", n/2 - 1, n/2 + 1);
        }
        else if(n % 4 == 3){
            printf("%lld %lld 1\n", n/2 - 2, n/2 + 2);
        }
    }

}