#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    int max=1000;
    int x;
    for(int i=0;i<=m-n;i++){
        x=a[i+n-1]-a[i];
        if(max>x){
            max=x;
        }
    }
    printf("%d\n",max);
    return 0;
}