#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+1];
        a[0]=0;
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            a[x]=i+1;
        }
        int c=0,c1=0,c2=0;
        int max;
        int min=1000000;
        for(int i=1;i<=n;i++){
            if(a[i-1]<a[i]){
                c++;
            }
            else{
                c1=(i-c)-1;
                c2=n-i+1;
                c=1;
                if(c1<c2){
                    max=c2;
                }
                else{
                    max=c1;
                }
                if(min>max){
                    min=max;
                }
            }
            if(i==n){
                c1=(i-c);
                c2=0;
                if(c1<c2){
                    max=c2;
                }
                else{
                    max=c1;
                }
                if(min>max){
                    min=max;
                }
            }
        }
        printf("%d\n",min);
    }
    return 0;
}