#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int al=1,bob=0,flag=0,x=2;
        for(int j=1;j<n;j++){
            if(j%2==0){
                al=al+x*2+1;
                x=x+2;
            }
            else{
                bob=bob+x*2+1;
                x=x+2;
            }
            if(al+bob>n){
                if(j%2==0){
                    al=al-(al+bob-n);
                }
                else{
                    bob=bob-(al+bob-n);
                }
                break;
            }
        }
        printf("%d %d\n",al,bob);
    }
    return 0;
}