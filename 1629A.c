#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
        }
        anon:
        for(int j=0;j<n;j++){
            if(k>=a[j]){
                k=k+b[j];
                for(int x=j;x<n-1;x++){
                    a[x]=a[x+1];
                    b[x]=b[x+1];
                }
                n--;
                goto anon;
            }
        }
        printf("%d\n",k);
        
    }


    return 0;
}