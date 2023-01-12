#include<stdio.h>
int main(){
    int n,s=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x=0,y=n-1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(a[x]>a[y]){
                s=s+a[x];
                x++;
            }
            else{
                s=s+a[y];
                y--;
            }
        }
        else{
            if(a[x]>a[y]){
                d=d+a[x];
                x++;
            }
            else{
                d=d+a[y];
                y--;
            }
        }
    }
    printf("%d %d\n",s,d);
    return 0;
}