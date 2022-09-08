#include<stdio.h>
int main(){
    int t,i,j,k,count;
    scanf("%d",&t);
    int a[4];
    for(i=0;i<t;i++){
        count=0;
        for(j=0;j<4;j++){
            scanf("%d",&a[j]);
        }
        for( k=1;k<4;k++){
            if((a[0]-a[k])<0){
                count++;
            }
         }
        printf("%d\n",count);
    }
}