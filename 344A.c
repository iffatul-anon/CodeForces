#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            continue;
        }
        count++;
    }
    printf("%d\n",count);
}