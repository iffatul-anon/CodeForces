#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q;
        scanf("%d %d",&n,&q);
        int a[n],b[n+2],c[n+2];
        b[0]=0;
        c[0]=0;
        int even=0,odd=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
            b[i+1]=even;
            c[i+1]=odd;
        }
        for(int i=0;i<q;i++){
            int l,r,k;
            scanf("%d %d %d",&l,&r,&k);
            if(k%2==0){
                int e=b[l-1]+(even-b[r])+(r-l+1);
                if((n-e)%2==0){
                    printf("NO\n");
                }
                else{
                    printf("YES\n");
                }
            }
            else{
                int o=c[l-1]+(odd-c[r])+(r-l+1);
                if(o%2==0){
                    printf("NO\n");
                }
                else{
                    printf("YES\n");
                }
            }
        }
    }
    return 0;
}