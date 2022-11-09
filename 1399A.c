#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int flag=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]<a[k]){
                    int tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        for(int j=0;j<n-1;j++){
            if(a[j]-a[j+1]>1){
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