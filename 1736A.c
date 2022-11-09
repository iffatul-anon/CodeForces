#include<stdio.h>
#include<stdlib.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],counta1=0;
        int b[n],countb1=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]==1){
                counta1++;
            }
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(b[j]==1){
                countb1++;
            }
        }
        int x=abs(counta1-countb1);
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]!=b[j]){
                count++;
            }
        }
        if(x==count){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",x+1);
        }
    }
    return 0;
}