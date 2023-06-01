#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==0){
            printf("%d %d\n",n/2,n/2);
        }
        else{
            int anon=(n+1)/2;
            if(anon%100000000==0){
                printf("%d %d\n",((n+1)/2)+45454545,(n/2)-45454545);
            }
            else if(anon%10000000==0){
                printf("%d %d\n",anon+4545454,(n/2)-4545454);
            }
            else if(anon%1000000==0){
                printf("%d %d\n",anon+454545,(n/2)-454545);
            }
            else if(anon%100000==0){
                printf("%d %d\n",anon+45454,(n/2)-45454);
            }
            else if(anon%10000==0){
                printf("%d %d\n",anon+4545,(n/2)-4545);
            }
            else if(anon%1000==0){
                printf("%d %d\n",anon+454,(n/2)-454);
            }
            else if(anon%100==0){
                printf("%d %d\n",anon+45,(n/2)-45);
            }
            else if(anon%10==0){
                printf("%d %d\n",anon+4,(n/2)-4);
            }
            else{
                printf("%d %d\n",(n+1)/2,n/2);
            }
        }
    }
    return 0;
}