#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],x,flag=0;;
        scanf("%d %d",&a[0],&a[1]);
        for(int j=2;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=1;j<n;j++){
            x=a[0];
            for(int k=1;k<n;k++){
                if(j==k){
                    continue;
                }
                x=x^a[k];
            }
            if(x==a[j]){
                printf("%d\n",x);
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",a[0]);
        }
    }
    return 0;
}