#include<stdio.h>
int main(){
    int n,p,q;
    scanf("%d",&n);
    scanf("%d",&p);
    int a[p];
    for(int i=0;i<p;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    int b[q];
    for(int i=0;i<q;i++){
        scanf("%d",&b[i]);
    }
    int x=p+q;
    int c[x];
    for(int i=0;i<p;i++){
        c[i]=a[i];
    }
    for(int i=0;i<q;i++){
        c[p+i]=b[i];
    }
    int count=0;
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(c[i]==c[j]){
                count++;
                break;
            }
        }
    }
    int y=x-count;
    if(n==y){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }

    return 0;
}