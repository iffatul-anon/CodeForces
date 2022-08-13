#include<stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a==0){
            printf("1\n");
        }
        else{
            int sum=(a*1)+(b*2);
            printf("%d\n",sum+1);
        }
    }
    return 0;
}