#include<stdio.h>
int main(){
    int n,a,a1=0,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&a);
        a1=a1+a;
    }
    if(a1==0){
        printf("EASY\n");
    }
    else{
        printf("HARD\n");
    }
    return 0;
}