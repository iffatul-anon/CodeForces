#include<stdio.h>
#include<math.h>
int main(){
    int t,n,d;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&d);
        if(d<=n){
            printf("YES\n");
        }
        else{
            int flag=0;
            for(int j=1;j<n;j++){
                long double x=d/(j+1.0);
                if(ceil(x)+j<=n){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}