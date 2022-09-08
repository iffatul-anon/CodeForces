#include<stdio.h>
int main(){
    int t,n,m,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int amax=0,bmax=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(amax<a){
                amax=a;
            }
        }
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            scanf("%d",&a);
            if(bmax<a){
                bmax=a;
            }
        }
        if(amax>bmax){
            printf("Alice\n");
            printf("Alice\n");
        }
        else if(amax<bmax){
            printf("Bob\n");
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
            printf("Bob\n");
        }
    }
    return 0;
}