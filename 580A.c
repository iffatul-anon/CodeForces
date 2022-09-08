#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=1,count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            count++;
        }
        else{
            count=1;
        }
        if(max<count){
            max=count;
        }
    }
    printf("%d\n",max);
    return 0;
}