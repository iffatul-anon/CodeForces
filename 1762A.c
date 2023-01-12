#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a;
        long long int sum=0;
        int count=10000000;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            sum=sum+a;
            if(a%2==0){
                int count1=0;
                while(a%2==0){
                    count1++;
                    a=a/2;
                }
                if(count>count1){
                    count=count1;
                }
            }
            else{
                int count1=0;
                while(a%2!=0){
                    count1++;
                    a=a/2;
                }
                if(count>count1){
                    count=count1;
                }
            }
        }
        if(sum%2==0){
            printf("0\n");
        }
        else{
            printf("%d\n",count);
        }
    }
    return 0;
}