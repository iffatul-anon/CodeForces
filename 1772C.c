#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&k,&n);
        int a[41];
        for(int j=0;j<41;j++){
            a[j]=0;
        }
        a[1]=1;
        a[2]=1;
        a[4]=1;
        a[7]=1;
        a[11]=1;
        a[16]=1;
        a[22]=1;
        a[29]=1;
        a[37]=1;
        int count=0;
        for(int j=1;j<=n;j++){
            if(a[j]==1){
                count++;
            }
        }
        int anon=k-count;
        if(anon>0){
            for(int j=n;j>0;j--){
                if(a[j]==0){
                    a[j]=1;
                    anon--;
                }
                if(anon==0){
                    break;
                }
            }
        }
        for(int j=1;j<=n;j++){
            if(a[j]==1){
                printf("%d ",j);
                k--;
            }
            if(k==0){
                break;
            }
        }
        printf("\n");
    }
    return 0;
}