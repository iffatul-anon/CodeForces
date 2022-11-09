#include<stdio.h>
int main(){
    int k,l,m,n,d;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int a[d+1];
    for(int i=0;i<=d;i++){
        a[i]=0;
    }
    for(int i=k;i<=d;i=i+k){
        a[i]=1;
    }
    for(int i=l;i<=d;i=i+l){
        a[i]=1;
    }
    for(int i=m;i<=d;i=i+m){
        a[i]=1;
    }
    for(int i=n;i<=d;i=i+n){
        a[i]=1;
    }
    int count=0;
    for(int i=0;i<=d;i++){
        if(a[i]==1){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}