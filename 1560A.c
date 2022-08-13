#include<stdio.h>
int main(){
    int t,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&k);
        int a[k];
        int x=0;
        for(int j=1;j<2000;j++){
            if(j%3==0 || j%10==3){
                continue;
            }
            x++;
            if(x==k){
                printf("%d\n",j);
                break;
            }
        }
    }

   
}