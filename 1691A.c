#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a,count1=0,count2=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a%2==0){
                count1++;
            }
            else{
                count2++;
            }
        }
        if(count1<count2){
            printf("%d\n",count1);
        }
        else{
            printf("%d\n",count2);
        }
    }
    return 0;
}