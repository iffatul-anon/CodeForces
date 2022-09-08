#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int y[1000];
        int z=1;
        int x=i+1;
        int flag=0;
        y[0]=i+1;
        while(flag==0){
            x=a[x-1];
            for(int j=0;j<z;j++){
                if(x==y[j]){
                    flag=1;
                    break;
                }
            }
            y[z]=x;
            z++;
        }
        printf("%d ",x);
    }
    printf("\n");
    return 0;
}