#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int k;
        scanf("%lld",&k);
        int a[20],x=0;
        while(k>0){
            if(k%9<4){
                a[x++]=k%9;
            }
            else{
                a[x++]=(k%9)+1;
            }
            k=k/9;
        }
        for(int i=x-1;i>=0;i--){
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}