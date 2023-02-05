#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int alice=1,bob=0,x=2,a1=1,a2=0,b1=0,b2=0;
        for(int j=1;j<n;j++){
            if(j%2==0){
                alice=alice+x*2+1;
                a1=a1+x+1;
                a2=a2+x;
                x=x+2;
            }
            else{
                bob=bob+x*2+1;
                b1=b1+x;
                b2=b2+x+1;
                x=x+2;
            }
            int anon=alice+bob;
            if(anon>=n){
                if(j%2==0){
                    a1=a1-(anon-n+1)/2;
                    a2=a2-(anon-n)/2;
                }
                else{
                    b1=b1-(anon-n)/2;
                    b2=b2-(anon-n+1)/2;
                }
                break;
            }
        }
        printf("%d %d %d %d\n",a1,a2,b1,b2);
    }
    return 0;
}