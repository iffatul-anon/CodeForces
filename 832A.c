#include<stdio.h>
#include<math.h>
int main(){
    long int n,k,i,a;
    scanf("%ld %ld",&n,&k);
    for(i=1;i<=pow(10,18);i++){
        a=k*i;
        if(a>n){
            if(i%2==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
            break;

        }

    }
    return 0;
}