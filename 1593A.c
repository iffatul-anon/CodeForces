#include<stdio.h>
int main(){
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a==b && b==c){
            printf("1 1 1\n");
        }
        else if(a==b && a>c){
            printf("1 1 %d\n",(a-c)+1);
        }
        else if(a==c && a>b){
            printf("1 %d 1\n",(a-b)+1);
        }
        else if(c==b && c>a){
            printf("%d 1 1\n",(c-a)+1);
        }
        else if(a>=b && a>=c){
            printf("0 %d %d\n",(a-b)+1,(a-c)+1);
        }
        else if(b>=a && b>=c){
            printf("%d 0 %d\n",(b-a)+1,(b-c)+1);
        }
        else if(c>=a && c>=b){
            printf("%d %d 0\n",(c-a)+1,(c-b)+1);
        }
    }
    
    return 0;
}
