#include<stdio.h>
int main(){
    int t,n,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        n=2*n;
        int a[2*n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int x=0;x<n;x++){
            for(int y=x+1;y<n;y++){
                if(a[x]==a[y]){
                    for(int z=y;z<n-1;z++){
                        a[z]=a[z+1];
                    }
                    y--;
                    n--;
                }
            }
        }
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    return 0;
}