#include<stdio.h>
int main(){
    int n,t,c,count=0,sum=0;
    scanf("%d %d %d",&n,&t,&c);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<=t){
            count++;
        }
        else{
            if(count>=c){
                sum=sum+(count-c+1);
            }
            count=0;
        }
    }
    if(count>=c){
        sum=sum+(count-c+1);
    }
    printf("%d\n",sum);
    return 0;
}