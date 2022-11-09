#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        scanf("%d %d",&n,&k);
        if(n==1){
            printf("R\n");
        }
        else{
            if(n%2==0){
                if(k<=n/2){
                    for(int i=1;i<=n;i++){
                        for(int j=1;j<=n;j++){
                            if(i==j && i%2!=0 && k>0){
                                printf("R");
                                k--;
                            }
                            else{
                                printf(".");
                            }
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("-1\n");
                }
            }
            else{
                if(k<=(n+1)/2){
                    for(int i=1;i<=n;i++){
                        for(int j=1;j<=n;j++){
                            if(i==j && i%2!=0 && k>0){
                                printf("R");
                                k--;
                            }
                            else{
                                printf(".");
                            }
                        }
                        printf("\n");
                    }
                }
                else{
                    printf("-1\n");
                }
            }
        }
    }
    return 0;
}