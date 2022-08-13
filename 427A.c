#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0,count2=0,sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            count=count+a[i];
        }
        if(a[i]==-1){
            sum=count-1;
            if(sum<0){
                count2++;
            }
            if(count>0){
                count--;
            }
        }
    }
    printf("%d\n",count2);
    
   
}