#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count=0,a,b;
        scanf("%d",&a);
        for(int i=1;i<n;i++){
            scanf("%d",&b);
            if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0)){
                count++;
            }
            a=b;
        }
        printf("%d\n",count);
    }
    return 0;
}