#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        printf("2\n");
        int a=n,b=n-1;
        for(int j=1;j<n;j++){
            printf("%d %d\n",a,b);
            a=(a+b);
            if(a%2!=0){
                a=a+1;
                a=a/2;
            }
            else{
                a=a/2;
            }
            b=b-1;
        }
    }
}