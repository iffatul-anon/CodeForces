#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a>0){
                count1++;
            }
            if(a<0){
                count2++;
            }
        }
        for(int i=1;i<=count1;i++){
            printf("%d ",i);
        }
        for(int i=1;i<=count2;i++){
            printf("%d ",count1-i);
        }
        printf("\n");
        for(int i=1;i<=count2;i++){
            printf("1 0 ");
        }
        count1=count1-count2;
        for(int i=1;i<=count1;i++){
            printf("%d ",i);
        }
        printf("\n");

    }
    return 0;
}