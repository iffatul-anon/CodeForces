#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        scanf("%d",&n);
        if(n==1){
            printf("1\n");
        }
        else if(n==2){
            printf("-1\n");
        }
        else{
            int a=1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    printf("%d ",a);
                    a=a+2;
                    if(a>n*n){
                        a=2;
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}