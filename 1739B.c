#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int d[n];
        for(int j=0;j<n;j++){
            scanf("%d",&d[j]);
        } 
        int flag=0;
        int a[n];
        a[0]=d[0];
        for(int j=1;j<n;j++){
            a[j]=a[j-1]+d[j];
            if((a[j-1]-d[j])>=0 && d[j]!=0){
                flag=1;
                break;;
            }
        }
        if(flag==1){
            printf("-1\n");
        }
        else{
            for(int j=0;j<n;j++){
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}