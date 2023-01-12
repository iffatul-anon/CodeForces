#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
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
        int flag=1;
        if(a[0]==a[1]){
            flag=0;
            if(a[0]>a[n-1]){
                flag=1;
                a[0]=a[n-1];
                a[n-1]=a[1];
            }
        }
        if(flag==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(int j=0;j<n;j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}