#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int x=0;
    for(int i=2;i<=n;i++){
        int flag=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            a[x]=i;
            x++;
        }
    }
    int count2=0;
    for(int i=6;i<=n;i++){
        int count=0;
        for(int j=0;j<x;j++){
            if(i%a[j]==0){
                count++;
            }
        }
        if(count==2){
            count2++;
        }
    }
    printf("%d\n",count2);
    
    return 0;
}