#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        int max1=0,max2=0;
        int pos1,pos2;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(max1<=a[i]){
                max1=a[i];
                pos1=i;
            }
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
            if(max2<=b[i]){
                max2=b[i];
                pos2=i;
            }
        }
        if(pos1==n-1 && pos2==n-1){
            printf("Yes\n");
        }
        else if(pos1!=n-1 && pos2!=n-1){
            printf("No\n");
        }
        else if(pos1!=n-1){
            int flag=0;
            for(int i=0;i<n;i++){
                if(a[i]>a[n-1] && (b[i]>a[n-1] || a[i]>max2)){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
        }
        else if(pos2!=n-1){
            int flag=0;
            for(int i=0;i<n;i++){
                if(b[i]>b[n-1] && (a[i]>b[n-1] || b[i]>max1)){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
        }
    }
    return 0;
}