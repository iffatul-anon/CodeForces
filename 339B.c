#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    long long int sum=0;
    int x=1;
    for(int i=0;i<m;i++){
        if(x<=a[i]){
            sum=sum+(a[i]-x);
            x=a[i];
        }
        else{
            sum=sum+(n-x+a[i]);
            x=a[i];
        }
    }
    printf("%lld\n",sum);
    return 0;
}