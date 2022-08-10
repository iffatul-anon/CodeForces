#include<stdio.h>
int main(){
    int n,p,q,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&p,&q);
        if((q-p)>1){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}