#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int count0=0,count1=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]==0){
                count0++;
            }
            if(a[j]==1){
                count1++;
            }
        }
        if(count1<=n/2){
            printf("%d\n",count0);
            for(int k=0;k<count0;k++){
                printf("0 ");
            }
            printf("\n");
        }
        else if(count0<n/2){
            if(count1%2==0){
                printf("%d\n",count1);
                for(int k=0;k<count1;k++){
                    printf("1 ");
                }
                printf("\n");
            }
            else{
                printf("%d\n",count1-1);
                for(int k=0;k<count1-1;k++){
                    printf("1 ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}