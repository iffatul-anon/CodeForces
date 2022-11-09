#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a,b;
        scanf("%d",&a);
        int min=a;
        for(int j=1;j<n;j++){
            scanf("%d",&b);
            if(min>b){
                min=b;
            }
        }
        if(a==min){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}