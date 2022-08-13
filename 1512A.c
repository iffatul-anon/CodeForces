#include<stdio.h>
int main(){
    int t,n,p;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int i=1;i<n-1;i++){
            if(a[i]!=a[i-1] && a[i]==a[i+1]){
                p=i;
            }
            else if(a[i]!=a[i-1] && a[i]!=a[i+1]){
                p=i+1;
            }
            else if(a[i]==a[i-1] && a[i]!=a[i+1]){
                p=n;
            }
        }
        printf("%d\n",p);
    }
    

}