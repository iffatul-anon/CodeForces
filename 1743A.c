#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a);
        }
        int count=0;
        for(int i=1;i<10-n;i++){
            count=count+(i*6);
        }
        printf("%d\n",count);
    }
    return 0;
}