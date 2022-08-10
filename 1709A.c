#include<stdio.h>
int main (){
    int t,x,a,b,c,flag;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        scanf("%d %d %d",&a,&b,&c);
        flag=0;
        if(x==1){
            if(a==0){
               flag=1;
            }else if(a==2){
                if(b==0){
                  flag=1;
                }
            }else if(a==3){
                if(c==0){
                  flag=1;
                }
            }
        }
        else if(x==2){
            if(b==0){
               flag=1;
            }else if(b==1){
                if(a==0){
                   flag=1;
                }
            }else if(b==3){
                if(c==0){
                    flag=1;
                }
            }
        }
        else if(x==3){
            if(c==0){
                flag=1;
            }else if(c==1){
                if(a==0){
                    flag=1;
                }
            }else if(c==2){
                if(b==0){
                   flag=1;
                }
            }
        }
        if(flag==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}