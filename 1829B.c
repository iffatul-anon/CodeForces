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
        int count=0,max=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
            }
            else{
                count=0;
            }
            if(count>max){
                max=count;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}