#include<stdio.h>
int main(){
    int t,l,r,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&l,&r,&k);
        int anon=(r-l)/2;
        if(l%2!=0 || r%2!=0){
            anon++;
        }
        if(l==1 && r==1){
            printf("NO\n");
        }
        else if(l==r || anon<=k){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}