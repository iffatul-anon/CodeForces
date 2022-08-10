#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if(n<4){
        printf("1\n");
        printf("%d\n",n);
    }
    else if(n%2==0){
        count=n/2;
        printf("%d\n",count);
        for(int i=0;i<count;i++){
            printf("2 ");
        }
    }
    else{
        n=n-3;
        count=n/2;
        printf("%d\n",count+1);
        for(int i=0;i<count;i++){
            printf("2 ");
        }
        printf("3");
    }
    return 0;
}