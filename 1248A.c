#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int e1=0,e2=0,o1=0,o2=0;
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int p;
            scanf("%d",&p);
            if(p%2==0){
                e1++;
            }
            else{
                o1++;
            }
        }
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            int q;
            scanf("%d",&q);
            if(q%2==0){
                e2++;
            }
            else{
                o2++;
            }
        }
        long long int anon=(e1*e2)+(o1*o2);
        printf("%lld\n",anon);
    }
    return 0;
}

