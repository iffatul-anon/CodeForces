#include<stdio.h>
int main(){
    long long int t,n,z,z2;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld %lld",&n,&z);
        long long int a[n],max=0,max2=0;
        for(int j=0;j<n;j++){
            scanf("%lld",&a[j]);
            if(max<a[j]){
                max=a[j];
            }
        }
        while(z>0){
            for(int j=0;j<n;j++){
                if(max<=(a[j]|z)){
                    max=a[j]|z;
                    a[j]=max;
                    z2=a[j]&z;
                }
                
            }
            if(z==z2){
                break;
            }
            z=z2;
        }
        printf("%lld\n",max);
    }
    return 0;
}