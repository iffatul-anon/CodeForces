#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        scanf("%d",&a[0]);
        int count=0;
        if(a[0]-0>=240){
            count=count+2;
        }
        else if(a[0]-0>=120){
            count++;
        }
        for(int j=1;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]-a[j-1]>=240){
                count=count+2;
            }
            else if(a[j]-a[j-1]>=120){
                count++;
            }
        }
        if(1440-a[n-1]>=240){
            count=count+2;
        }
        else if(1440-a[n-1]>=120){
            count++;
        }
        if(count>=2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}