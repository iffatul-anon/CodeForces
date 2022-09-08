#include<stdio.h>
int main(){
    int t,n;
    int max=1;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        for(int x=1;x<=n;x++){
            for(int y=x+1;y<=n;y++){
                for(int z=n/2;z>0;z--){
                    if(x%z==0 && y%z==0){
                        if(max<z){
                            max=z;
                        }
                    }
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}