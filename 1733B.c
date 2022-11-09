#include<stdio.h>
int main(){
    int t,n,x,y,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&x,&y);
        if((x==0 && y==0) || (x!=0 && y!=0)){
            printf("-1\n");
        }
        else{
            if(x!=0){
                if(n%x==1){
                    m=0;
                    while(m<n-1){
                        for(int j=1;j<=x;j++){
                            printf("%d ",m+2);
                        }
                        m=m+x;
                    }
                }
                else if(x==1){
                    if(n==2){
                        printf("1\n");
                    }
                    else{
                        for(int j=2;j<=n;j++){
                            printf("%d ",j);
                        }
                    }
                }
                else{
                    printf("-1\n");
                }
            }
            else if(y!=0){
                if(n%y==1){
                    m=0;
                    while(m<n-1){
                        for(int j=1;j<=y;j++){
                            printf("%d ",m+2);
                        }
                        m=m+y;
                    }
                }
                else if(y==1){
                    if(n==2){
                        printf("1\n");
                    }
                    else{
                        for(int j=2;j<=n;j++){
                            printf("%d ",j);
                        }
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