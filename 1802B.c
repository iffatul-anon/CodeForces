#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count=0,count2=0,max=0;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            if(a==1){
                count++;
                count2++;
                if(max<count2){
                    max=count2;
                }
            }
            if(a==2 && count>0){
                count--;
                if(count%2==0){
                    count2=count/2;
                }
                else{
                    count2=(count+1)/2;
                }
                count2++;
                count++;
                if(max<count2){
                    max=count2;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}