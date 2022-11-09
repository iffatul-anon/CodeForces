#include<stdio.h>
#include<string.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int x=(a+b)/4;
        if(a>b){
            if(x>b){
                printf("%d\n",b);
            }
            else{
                printf("%d\n",x);
            }
        }
        else{
            if(x>a){
                printf("%d\n",a);
            }
            else{
                printf("%d\n",x);
            }
        }
    }
    return 0;
}