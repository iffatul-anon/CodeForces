#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int a[3];
        for(int j=0;j<3;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<3;j++){
            for(int k=j+1;k<3;k++){
                if(a[j]>a[k]){
                    int tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;
                }
            }
        }
        printf("%d\n",a[1]);
    }

    return 0;
}