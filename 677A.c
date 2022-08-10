#include<stdio.h>
int main(){
    int n,h,a,sum=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>h){
            sum=sum+2;
        }
        else{
            sum=sum+1;
        }
    }
    printf("%d\n",sum);
    return 0;
}