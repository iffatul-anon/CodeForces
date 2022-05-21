#include<stdio.h>
#include<math.h>
int main(){

    int t,x,y,i,b,d,a1=0,b1=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&x,&y);
       
            for(b=1;b<=100;b++){
                
                    d=y-(x*(pow(b,1)));
                    if(d==0){
                        a1=1;
                        b1=b;
                        goto out;
                    }
                
            }
        out: 
        printf("%d %d\n",a1,b1);
        a1=0;
        b1=0;
    }
    return 0;
}