#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int sum=0;
        for(int j=0;j<n;j++){
            int count=0;
            for(int k=j+1;k<n;k++){
                if(a[j]==a[k]){
                    count++;
                    a[k]=a[n-1];
                    k--;
                    n--;
                }
            }
            sum=sum+count;
        }
        if(sum%2==0){
            printf("%d\n",n);
        }
        else if(n==1 && sum==1){
            printf("0\n");
        }
        else{
            printf("%d\n",n-1);
        }
        
    }
}