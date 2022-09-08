#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int x=0;x<t;x++){
        scanf("%d",&n);
        int a[n];
        int count1=0,count2=0;
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==1){
                count1++;
                sum1=sum1+a[i];
            }
            if(a[i]==2){
                count2++;
                sum2=sum2+a[i];
            }
        }
        if(count2%2!=0 && count1==0){
            printf("NO\n");
        }
        else if(sum2%2==0 && sum1%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}