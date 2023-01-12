#include<stdio.h>
int main(){
    int  n;
    scanf("%d",&n);
    int a[n];
    int min=1000000000;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(min>a[i]){
            min=a[i];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]%min!=0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d\n",min);
    }
    else{
        printf("-1\n");
    }
    return 0;
}