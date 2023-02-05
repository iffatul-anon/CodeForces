#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a,b,x;
        scanf("%d",&a);
        int flag=0;
        if(a%2==0){
            flag=1;
            x=0;
        }
        for(int i=1;i<n;i++){
            scanf("%d",&b);
            if(a%2!=0 && b%2!=0){
                flag=2;
                x=i;
            }
            if(b%2==0){
                flag=1;
                x=i;
            }
            a=b;
        }
        if(flag==0){
            printf("-1\n");
        }
        else if(flag==1){
            printf("1\n");
            printf("%d\n",x+1);
        }
        else if(flag==2){
            printf("2\n");
            printf("%d %d\n",x,x+1);
        }
    }
    return 0;
}