#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int count=0,count2=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]==2){
                count++;
            }
        }
        if(count%2!=0){
            printf("-1\n");
        }
        else{
            int j;
            for(j=0;j<n;j++){
                if(a[j]==2){
                    count2++;
                }
                if(count2==count/2){
                    break;;
                }
            }
            printf("%d\n",j+1);
        }
    }
    return 0;
}