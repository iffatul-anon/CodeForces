#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    scanf("%d",&a[0]);
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
            count++;
        }
        if(min>a[i]){
            min=a[i];
            count++;
        }
    }
    printf("%d\n",count);
}