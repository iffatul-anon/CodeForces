#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int count1=0,count2=0;
        for(int j=0;j<n;j=j+2){
            if(a[j]%2!=0){
                count1++;
            }
        }
        for(int j=1;j<n;j=j+2){
            if(a[j]%2==0){
                count2++;
            }
        }
        if(count1==count2){
            printf("%d\n",count1);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}