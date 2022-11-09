#include<stdio.h>
int main(){
    int n,q,m,i,j,tem;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d",&m);
        int l=0,h=n-1,mid;
        while(l<h){
            mid=(l+h)/2;
            if(a[mid]>m){
                h=mid-1;
            }
            else if(a[mid]<m){
                l=mid+1;
            }
            else if(a[mid]==m){
                l=mid+1;
            }
        }
        for(j=h;j>=0;j--){
            if(a[j]<=m){
                break;
            }
        }
        printf("%d\n",j+1);
    }
    return 0;
}