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
        int anon[200001]={0};
        int i;
        for(i=n-1;i>=0;i--){
            if(anon[a[i]]==0){
                anon[a[i]]=1;
            }
            else{
                break;
            }
        }
        printf("%d\n",i+1);
    }
    return 0;
}