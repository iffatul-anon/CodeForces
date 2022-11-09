#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int s[n],f[n],d[n];
        for(int j=0;j<n;j++){
            scanf("%d",&s[j]);
        }
        for(int j=0;j<n;j++){
            scanf("%d",&f[j]);
        }
        d[0]=f[0]-s[0];
        for(int j=1;j<n;j++){
            if(s[j]>=f[j-1]){
                d[j]=f[j]-s[j];
            }
            else{
                d[j]=f[j]-f[j-1];
            }
        }
        for(int j=0;j<n;j++){
            printf("%d ",d[j]);
        }
        printf("\n");
    }
    return 0;
}