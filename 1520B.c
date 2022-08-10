#include<stdio.h>
int main (){
    int t,n,count,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n<10){
            printf("%d\n",n);
        }
        else if(n<110){
            count=9;
            x=11;
            while(x<=n){
                x=x+11;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<1110){
            count=18;
            x=111;
            while(x<=n){
                x=x+111;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<11110){
            count=27;
            x=1111;
            while(x<=n){
                x=x+1111;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<111110){
            count=36;
            x=11111;
            while(x<=n){
                x=x+11111;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<1111110){
            count=45;
            x=111111;
            while(x<=n){
                x=x+111111;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<11111110){
            count=54;
            x=1111111;
            while(x<=n){
                x=x+1111111;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<111111110){
            count=63;
            x=11111111;
            while(x<=n){
                x=x+11111111;
                count++;
            }
            printf("%d\n",count);
        }
        else if(n<1111111110){
            count=72;
            x=111111111;
            while(x<=n){
                x=x+111111111;
                count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}