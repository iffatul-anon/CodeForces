#include<stdio.h>
int main(){
    int t,b,p,f,h,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&b,&p,&f);
        scanf("%d %d",&h,&c);
        if(h>c){
            if(b>=p*2){
                b=(b-(p*2))/2;
                if(b>f){
                    printf("%d\n",(p*h)+(c*f));
                }
                else{
                    printf("%d\n",(p*h)+(b*c));
                }
            }
            else{
                printf("%d\n",(b/2)*h);
            }
        }
        else{
            if(b>=f*2){
                b=(b-(f*2))/2;
                if(b>p){
                    printf("%d\n",(f*c)+(p*h));
                }
                else{
                    printf("%d\n",(f*c)+(b*h));
                }
            }
            else{
                printf("%d\n",(b/2)*c);
            }
        }
    }
    return 0;
}