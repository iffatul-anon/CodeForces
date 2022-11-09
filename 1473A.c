#include<stdio.h>
int main(){
    int t,n,d,i,j,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&n,&d);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[j]>a[k]){
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        if(a[n-1]>d){
            if(a[0]+a[1]<=d){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("YES\n");
        }
    }
}