#include<stdio.h>
int main(){
    int t,n,s;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&n,&s);
        if(n==1){
            printf("%d\n",s);
        }
        else{
            if(n%2!=0){
                n=n+1;
                n=n-(n/2);
                printf("%d\n",s/n);
            }
            else{
                n=n-(n/2)+1;
                printf("%d\n",s/n);
            }
        }
    }
    return 0;
}