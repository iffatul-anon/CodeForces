#include<stdio.h>
int main(){
    int n,q,q1;
    scanf("%d %d",&n,&q);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<q;i++){
        scanf("%d",&q1);
        for(int j=0;j<n;j++){
            if(a[j]==q1){
                printf("%d ",j+1);
                int tem=a[j];
                for(int k=j;k>0;k--){
                    a[k]=a[k-1];
                }
                a[0]=tem;
                break;
            }
        }
    }
    return 0;
}