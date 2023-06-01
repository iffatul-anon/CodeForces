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
        int i=0,j=n-1;
        int count=0;
        while(i<j){
            if(a[i]==1 && a[j]==0){
                count++;
                i++;
                j--;
            }
            if(a[i]==0){
                i++;
            }
            if(a[j]==1){
                j--;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}