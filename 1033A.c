#include<stdio.h>
int main(){
    int n;
    int ax,ay,bx,by,cx,cy;
    scanf("%d",&n);
    scanf("%d %d",&ax,&ay);
    scanf("%d %d",&bx,&by);
    scanf("%d %d",&cx,&cy);
    int flag1=0,flag2=0;
    if(bx>ax){
        if(cx>ax){
            flag1=1;
        }
    }
    else if(bx<ax){
        if(cx<ax){
            flag1=1;
        }
    }
    if(by>ay){
        if(cy>ay){
            flag2=1;
        }
    }
    else if(by<ay){
        if(cy<ay){
            flag2=1;
        }
    }
    if(flag1==1 && flag2==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}