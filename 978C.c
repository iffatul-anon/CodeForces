#include<stdio.h>
int main(){
    long long int n,m,i;
    scanf("%lld %lld",&n,&m);
    long long int x,sum=0;
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&x);
        sum=sum+x;
        a[i]=sum;
    }
    long long int c[m],d[m];
    for(i=0;i<m;i++){
        scanf("%lld",&x);
        long long int anon,l=0,h=n-1,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(a[mid]==x){
                anon=mid;
                break;
            }
            else if(a[mid]>x){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(l>h){
            anon=l;
        }
        if(anon==0){
            c[i]=1;
            d[i]=x;
        }
        else if(a[anon]>=x){
            c[i]=anon+1;
            d[i]=x-a[anon-1];
        }
        else if(a[anon<x]){
            c[i]=anon+2;
            d[i]=x-a[anon];
        }
    }
    for(i=0;i<m;i++){
        printf("%lld %lld\n",c[i],d[i]);
    }
    return 0;
}