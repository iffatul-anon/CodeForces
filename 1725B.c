#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        int sum=a[i];
        while(sum<=d){
            sum=sum+a[i];
            n--;
            if(n-count==0){
                goto anon;
            }
        }
        count++;
    }
    anon:
    printf("%d\n",count);
    return 0;
}