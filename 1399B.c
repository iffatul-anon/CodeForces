#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n],b[n];
        int am=1000000000,bm=1000000000;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(am>a[j]){
                am=a[j];
            }
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
            if(bm>b[j]){
                bm=b[j];
            }
        }
        long long int count=0;
        for(int j=0;j<n;j++){
            int ax=a[j]-am;
            int bx=b[j]-bm;
            if(ax>=bx){
                count=count+ax;
            }
            else{
                count=count+bx;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}