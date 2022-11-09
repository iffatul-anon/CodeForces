#include<stdio.h>
#include<math.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++){
        scanf("%d",&n);
        for(int i=2;i<30;i++){
            int a=pow(2,i);
            if(n%(a-1)==0){
                x=n/(a-1);
                break;
            }
        }
        printf("%d\n",x);
    }
    return 0;
}