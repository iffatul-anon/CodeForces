#include<stdio.h>
int main(){
    int t,n,H,M,h,m;
    int x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int min=1440;
        scanf("%d %d %d",&n,&H,&M);
        for(int j=0;j<n;j++){
            scanf("%d %d",&h,&m);
            if(h==H && m==M){
                x=0;
            }
            else if(h==H){
                if(m>M){
                    x=m-M;
                }
                else if(m<M){
                    x=1440-(M-m);
                }
            }
            else if(h>H){
                x=(h*60+m)-(H*60+M);
            }
            else if(h<H){
                x=(1440-(H*60+M))+(h*60+m);
            }
            if(min>x){
                min=x;
            }
        }
        printf("%d %d\n",min/60,min%60);
    }
    return 0;
}