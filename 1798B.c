#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int m;
        scanf("%d",&m);
        int a[50001],x=0;
        int anon2[m];
        for(int i=0;i<m;i++){
            int n;
            scanf("%d",&n);
            anon2[i]=n;
            int a2;
            for(int j=0;j<n;j++){
                scanf("%d",&a2);
                a[x++]=a2;
            }
        }
        int b[50001]={0};
        int alex[m],y=m-1,z=m-1;
        int flag1=0;
        for(int i=x-1;i>=0;i--){
            if(b[a[i]]==0 && flag1==0){
                anon2[y]--;
                flag1=1;
                b[a[i]]=1;
                alex[z--]=a[i];
            }
            else if(anon2[y]>0){
                anon2[y]--;
                b[a[i]]=1;
            }
            if(anon2[y]==0){
                y--;
                flag1=0;
            }
            if(z==-1){
                break;
            }
        }
        if(z==-1){
            for(int i=0;i<m;i++){
                printf("%d ",alex[i]);
            }
            printf("\n");
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}