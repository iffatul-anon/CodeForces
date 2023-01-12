#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int a;
        int x=1;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a==x){
                x++;
            }
        }
        int y=n-x+1;
        if(y%k==0){
            y=y/k;
        }
        else{
            y=(y/k)+1;
        }
        printf("%d\n",y);
    }
    return 0;
}