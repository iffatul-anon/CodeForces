#include<stdio.h>
int main(){
    long int n,t,flag=1;
    scanf("%ld",&n);
    if(n>0){
    while(n>0){
        t=n%10;
        n=n/10;
        if(t!=4 && t!=7){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    else{
        printf("NO\n");
    }
    return 0;

}