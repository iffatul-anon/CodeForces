#include<stdio.h>
int main(){
    int t,n,x,n2,tem;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&x);
        n2=n*2;
        int a[n2];
        for(int j=0;j<n2;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n2;j++){
            for(int k=j+1;k<n2;k++){
                if(a[j]>a[k]){
                    tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        int anon=0,flag=0;
        for(int i=0;i<n;i++){
            anon=a[i+n]-a[i];
            if(anon<x){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}