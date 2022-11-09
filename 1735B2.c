#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int min=100000000;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(min>a[j]){
                min=a[j];
            }
        }
        int x=(min*2)-1;
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]>=(min*2)){
                a[j]=a[j]-x;
                count++;
                j--;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}