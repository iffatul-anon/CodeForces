#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int flag1=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i>0 && a[i]!=a[i-1]){
                flag1=1;
            }
        }
        if(flag1==0){
            printf("1\n");
        }
        else{
            int count=2,flag;
            if(a[0]<a[1]){
                flag=0;
            }
            else if(a[0]>a[1]){
                flag=1;
            }
            else{
                for(int i=0;i<n;i++){
                    if(a[i]!=a[i+1]){
                        if(a[0]<a[i+1]){
                            flag=0;
                            break;
                        }
                        else if(a[0]>a[i+1]){
                            flag=1;
                            break;
                        }
                    }
                }
            }
            for(int i=0;i<n-1;i++){
                if(flag==0 && a[i]>a[i+1]){
                    count++;
                    flag=1;
                }
                else if(flag==1 && a[i]<a[i+1]){
                    count++;
                    flag=0;
                }
            }
            printf("%d\n",count);
        }
    }
    return 0;
}