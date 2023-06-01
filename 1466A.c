#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int b[50]={0};
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                b[a[j]-a[i]]++;
            }
        }
        int count=0;
        for(int i=0;i<50;i++){
            if(b[i]!=0){
                count++;
            }
        }
        printf("%d\n",count);
    }
}