#include<stdio.h>

int main(){
    int n,k,have,spent=0,i,flag=0;

    scanf("%d %d",&n,&k);

    have=240-k;

    for(i=1;i<=n;i++){
        spent=spent+(5*i);
        if(spent>have){
            flag=1;
            break;
        }
    }
    if(flag==1){
    printf("%d\n",i-1);
    }
    else{
        printf("%d\n",n);
    }

    return 0;
}