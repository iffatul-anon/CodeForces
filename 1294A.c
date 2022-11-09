#include<stdio.h>
int main(){
    int t,n,a,b,c,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&n);
        if(a>=b && a>=c){
            x=(a-b)+(a-c);
        }
        else if(b>=a && b>=c){
            x=(b-a)+(b-c);
        }
        else if(c>=a && c>=b){
            x=(c-a)+(c-b);
        }
        if(x>n){
            printf("NO\n");
        }
        else{
            n=n-x;
            if(n%3==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}