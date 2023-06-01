#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            int a[n],b[n];
            int x=2*n;
            for(int i=0;i<n;i=i+2){
                a[i]=i+1;
                b[i]=x--;
            }
            for(int i=1;i<n;i=i+2){
                a[i]=i+1;
                b[i]=x--;
            }
            for(int i=0;i<n;i++){
                printf("%d %d\n",a[i],b[i]);
            }
        }
    }
    return 0;
}