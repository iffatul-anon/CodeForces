#include<stdio.h>
int main(){
    int n,t,sum,i,j,k;
    scanf("%d %d",&n,&t);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count;
    int max=0;
    for(i=0;i<n-max;i++){
        count=0;
        sum=0;
        for(j=i;j<n;j++){
            sum=sum+a[j];
            if(sum>t){
                break;
            }
            count++;
        }
        if(max<count){
            max=count;
        }   
    }
    printf("%d\n",max);
    return 0;
}