#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100];
    int b,j=0,sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        if(b<0){
            sum=sum+b;
            a[j]=b;
            j++;
        }
    }
    if(j<=m){
        printf("%d\n",-(sum));
    }
    else{
    for(int k=0;k<j;k++){
        for(int x=k+1;x<j;x++){
            if(a[k]>a[x]){
                int tem=a[k];
                a[k]=a[x];
                a[x]=tem;
            }
        }
    }
    sum=0;
    for(int y=0;y<m;y++){
        sum=sum+a[y];
    }
    printf("%d\n",-(sum));
    }
 
}