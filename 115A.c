#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    a[0]=0;
    int flag=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int max=1;
    for(int i=1;i<=n;i++){
        int x=a[i];
        int count=1;
        while(x!=-1){
            x=a[x];
            count++;
            if(count==n){
                break;
            }
        }
        if(max<count){
            max=count;
        }
    }
    printf("%d\n",max);
  return 0;
}