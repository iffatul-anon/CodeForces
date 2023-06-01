#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            printf("-1\n");
        }
        else{
            int a[100],x=0;
            while(n!=1){
                n=n/2;
                if(n%2==0){
                    a[x++]=1;
                    n++;
                }
                else{
                    a[x++]=2;
                }
            }
            printf("%d\n",x);
            for(int i=x-1;i>=0;i--){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}