#include<stdio.h>
int main(){
    int n,spend=0;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        spend=spend+(max-a[i]);
    }
    printf("%d\n",spend);
    return 0;
}