#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int flag=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int sub;
        int min=999;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(j==k){
                    continue;
                }
                if(a[j]==a[k]){
                    flag=1;
                    goto anon;
                }
                sub=a[j]-a[k];
                if(sub==-1){
                    sub=1;
                }
                if(sub<-1){
                    sub=(sub*sub)/2;
                }
                if(min>sub){
                    min=sub;
                }
            }
        }
        anon:
        if(flag==1){
            printf("0\n");
        }
        else{
            printf("%d\n",min);
        }
    }
    return 0;
}