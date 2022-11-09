#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],x=0;
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
    int count=0;
    for(int i=0;i<x;i++){
        int y=a[i]-1;
        for(int j=0;j<x-1;j++){
            if((a[j]+a[j+1])==y){
                count++;
                break;
            }
        }
    }
    if(count>=k){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}