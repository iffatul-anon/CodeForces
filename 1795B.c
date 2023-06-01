#include<stdio.h>
int main(){
    int t,n,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&k);
        int l,r,anon[51]={0},count=0,flag=0;
        for(int j=0;j<n;j++){
            scanf("%d %d",&l,&r);
            if(l<=k && k<=r){
                for(int x=l;x<=r;x++){
                    anon[x]++;
                }
                count++;
            }
        }
        if(count==0){
            printf("NO\n");
        }
        else{
            for(int x=0;x<51;x++){
                if(anon[x]==count){
                    flag++;
                }
            }
            if(flag==1){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}