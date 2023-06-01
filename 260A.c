#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    a=a*10;
    int x=0;
    while(a%b!=0){
        a++;
        x++;
        if(x==10){
            break;
        }
    }
    if(x==10){
        printf("-1\n");
    }
    else{
        printf("%d",a);
        for(int i=0;i<n-1;i++){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}