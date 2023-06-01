#include<stdio.h>
int main(){
    int t,a1,a2,a3,a4;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
        int sum=a1;
        if(a1==0 && (a2!=0 || a3!=0 || a4!=0)){
            sum=1;
        }
        else{
        if(a2>a3){
            sum=sum+a3+a3;
            int x=a2-a3;
            if(x>a1){
                sum=sum+a1+1;
            }
            else{
                sum=sum+x;
                int y=a1-x;
                if(y>=a4){
                    sum=sum+a4;
                }
                else{
                    sum=sum+y+1;
                }
            }
        }
        else if(a2<a3){
            sum=sum+a2+a2;
            int x=a3-a2;
            if(x>a1){
                sum=sum+a1+1;
            }
            else{
                sum=sum+x;
                int y=a1-x;
                if(y>=a4){
                    sum=sum+a4;
                }
                else{
                    sum=sum+y+1;
                }
            }
        }
        else{
            sum=sum+a2+a3;
            if(a1>=a4){
                sum=sum+a4;
            }
            else{
                sum=sum+a1+1;
            }
        }
        }
        printf("%d\n",sum);
    }
    return 0;
}