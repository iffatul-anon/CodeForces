#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        int a,max=0,min=1000000000;
        long long int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            sum=sum+a;
            if(max<a){
                max=a;
            }
            if(min>a){
                min=a;
            }
        }
        if(n>=m){
            printf("NO\n");
        }
        else{
        sum=sum+max-min;
        if(sum<=m-n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }
    }
    return 0;
}