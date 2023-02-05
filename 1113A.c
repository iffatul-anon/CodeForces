#include<stdio.h>
int main(){
    int n,v;
    scanf("%d %d",&n,&v);
    if(v>=n){
        printf("%d\n",n-1);
    }
    else{
        int sum=0;
        int x=1;
        while(v+x<=n){
            sum=sum+x++;
        }
        printf("%d\n",sum+v-1);
    }
    return 0;
}