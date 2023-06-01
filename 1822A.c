#include<stdio.h>
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,t;
        scanf("%d %d",&n,&t);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            a[i]=a[i]+i;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        int max=0;
        int anon=-1;
        for(int i=0;i<n;i++){
            if(max<=b[i] && a[i]<=t){
                max=b[i];
                anon=i+1;
            }
        }
        printf("%d\n",anon);
    }
    return 0;
}