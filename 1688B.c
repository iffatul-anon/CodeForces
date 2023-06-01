#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int min=1000000000,a,flag=0,count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a%2!=0){
                flag=1;
            }
            else{
                count++;
                int count2=0;
                while(a%2==0){
                    a=a/2;
                    count2++;
                }
                if(min>count2){
                    min=count2;
                }
            }
        }
        if(flag==1){
            printf("%d\n",count);
        }
        else{
            printf("%d\n",count-1+min);
        }
    }
}