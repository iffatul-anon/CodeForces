#include<stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    while(t--){
        long long int n,m;
        scanf("%lld %lld",&n,&m);
        long long int x1,y1,x2,y2;
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        if((x1==1 && y1==1) || (x1==n && y1==m) || (x1==1 && y1==m) || (x1==n && y1==1) || (x2==1 && y2==1) || (x2==n && y2==m) || (x2==1 && y2==m) || (x2==n && y2==1)){
            printf("2\n");
        }
        else if(x1==1 || x1==n || y1==1 || y1==m || x2==1 || x2==n || y2==1 || y2==m){
            printf("3\n");
        }
        else{
            printf("4\n");
        }
    }
    return 0;
}