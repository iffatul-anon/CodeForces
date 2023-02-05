#include<stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[101];
        for(int j=0;j<101;j++){
            a[j]=0;
        }
        for(int j=0;j<n;j++){
            scanf("%d",&x);
            a[x]++;
        }
        for(int j=0;j<101;j++){
            if(a[j]>0){
                printf("%d ",j);
                a[j]--;
            }
        }
        for(int j=0;j<101;j++){
            if(a[j]>0){
                printf("%d ",j);
                a[j]--;
                j--;
            }
        }
        printf("\n");
    }
    return 0;
}