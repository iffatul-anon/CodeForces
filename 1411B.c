#include<stdio.h>
int main(){
    int t;
    long long int n,n2,j,x,y,z;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        for(j=n;j<=1000000000000000000;j++){
            int flag=0;
            n2=j;
            while(n2>0){
                if(n2%10!=0){
                    if(j%(n2%10)!=0){
                        flag=1;
                        break;
                    }
                }
                n2=n2/10;
            }
            if(flag==0){
                printf("%lld\n",j);
                break;
            }
        }
    }
    return 0;
}