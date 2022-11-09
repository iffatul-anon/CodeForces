#include<stdio.h>
int main(){
    int a,m,flag=0;
    scanf("%d %d",&a,&m);
    for(int i=1;i<=20;i++){
        if(a%m==0){
            flag=1;
            break;
        }
        a=a+(a%m);
    }
    if(flag==1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}