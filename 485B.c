#include<stdio.h>
int main(){
    int n,x,y;
    int xmax=-1000000000,ymax=-1000000000;
    int xmin=1000000000,ymin=1000000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(xmax<x){
            xmax=x;
        }
        if(xmin>x){
            xmin=x;
        }
        if(ymax<y){
            ymax=y;
        }
        if(ymin>y){
            ymin=y;
        }
    }
    
    long long int xm=(0-xmin)+xmax;
    long long int ym=(0-ymin)+ymax;
    long long int area;
    if(xm>ym){
        area=xm*xm;
    }
    else{
        area=ym*ym;
    }
    printf("%lld\n",area);
    return 0;
}