#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0,pmax;
    int min=100,pmin;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
            pmax=i;
        }
        if(min>=a[i]){
            min=a[i];
            pmin=i;
        }
    }
    if(pmax>pmin){
        pmax=pmax-1;
        pmin=n-pmin;
        printf("%d\n",pmax+pmin-1);
    }
    else{
        pmax=pmax-1;
        pmin=n-pmin;
        printf("%d\n",pmax+pmin);
    }
}