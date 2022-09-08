#include<stdio.h>
int main(){
    int t,n,m;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&m);
        int a[n];
        int sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            sum=sum+a[j]+a[j];
        }
        if(n<3){
            printf("-1\n");
        }
        else if(n>m){
            printf("-1\n");
        }
        else{
            printf("%d\n",sum);
            for(int j=1;j<n;j++){
                printf("%d %d\n",j,j+1);
            }
            printf("1 %d\n",n);
        }
    }
    return 0;
}