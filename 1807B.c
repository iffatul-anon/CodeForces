#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a;
        int m=0,b=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            if(a%2==0){
                m=m+a;
            }
            else{
                b=b+a;
            }
        }
        if(m>b){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}