#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        for(int j=1;j<=n;j++){
            if(j%4==1 || j%4==0){
                for(int k=1;k<=m;k++){
                    if(k%4==1 || k%4==0){
                        printf("1 ");
                    }
                    else{
                        printf("0 ");
                    }
                }
            }
            else{
                for(int k=1;k<=m;k++){
                    if(k%4==1 || k%4==0){
                        printf("0 ");
                    }
                    else{
                        printf("1 ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}