#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int flag1=0,flag2=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(a[j]%2==0){
                flag1++;
            }
            else{
                flag2++;
            }
        }
        if(flag1==0 || flag2==0){
            printf("YES\n");
        }
        else if(flag1%2==0 && flag2%2==0){
            printf("YES\n");
        }
        else{
            int count=0;
            for(int x=0;x<n;x++){
                for(int y=0;y<n;y++){
                    if(a[x]-a[y]==1){
                        count=1;
                    }
                    if(a[y]-a[x]==1){
                        count=1;
                    }
                }
            }
        if(count==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }
    }
    return 0;
}
