#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        printf("? 1 1\n");
        fflush(stdout);
        int k;
        scanf("%d",&k);
        if(k>=n ){
            printf("? 1 %d\n",k+1);
            fflush(stdout);
            int p;
            scanf("%d",&p);
            printf("! %d %d\n",p+1,k+1);
            fflush(stdout);
        }
        else if(k>=m){
            printf("? %d 1\n",k+1);
            fflush(stdout);
            int p;
            scanf("%d",&p);
            printf("! %d %d\n",k+1,p+1);
            fflush(stdout);
        }
        else{
            printf("? %d 1\n",k+1);
            fflush(stdout);
            int p;
            scanf("%d",&p);
            printf("? 1 %d\n",k+1);
            fflush(stdout);
            int q;
            scanf("%d",&q);
            if(p==k && q==k){
                printf("! %d %d\n",k+1,k+1);
            }
            else if(p<k){
                printf("! %d %d\n",k+1,p+1);
            }
            else if(q<k){
                printf("! %d %d\n",q+1,k+1);
            }
            fflush(stdout);
        }
    }
    return 0;
}