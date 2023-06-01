#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n,max=0,p=0;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            if(i!=0 && max<a[i]){
              max=a[i];
              p=i;
            }
        }
        if (p == n - 1){
            p++;
        }
        int index = p - 1;
        for (int i = p - 2; i >= 0; i--){
            if (a[0] >= a[i]){
                index = i + 1;
                break;
            }
        }
        for (int i = p; i < n; i++){
            printf("%d ",a[i]);
        }
        for (int i = p - 1; i >= index; i--){
            printf("%d ",a[i]);
        }
        for (int i = 0; i < index; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}