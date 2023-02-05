#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int h,count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&h);
            if(h==1){
                count++;
            }
        }
        n=n-count;
        if(count%2==0){
            count=count/2;
        }
        else{
            count=(count/2)+1;
        }
        printf("%d\n",n+count);
    }
    return 0;
}