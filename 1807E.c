#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n+1];
        b[0]=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i+1]=b[i]+a[i];
        }
        int l=1,h=n;
        while(l<h){
            int mid=(l+h)/2;
            printf("? %d ",mid-l+1);
            for(int i=l;i<=mid;i++){
                printf("%d ",i);
            }
            fflush(stdout);
            int x;
            scanf("%d",&x);
            if((b[mid]-b[l-1])==x){
                l=mid+1;
            }
            else{
                h=mid;
            }
        }
        printf("! %d\n",l);
        fflush(stdout);
    }
    return 0;
}