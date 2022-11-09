#include<stdio.h>
#include<math.h>
int Anon(int x1,int y1,int x2,int y2,int x3,int y3){
    if((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1)) {
        return 0;
    }
    int a=pow(x1-x2,2)+pow(y1-y2,2);
    int b=pow(x2-x3,2)+pow(y2-y3,2);
    int c=pow(x3-x1,2)+pow(y3-y1,2);
    int x,y,z;
    if(a>=b && a>=c){
        z=a;
        y=b;
        x=c;
    }
    else if(b>=a && b>=c){
        z=b;
        y=a;
        x=c;
    }
    else if(c>=a && c>=b){
        z=c;
        y=b;
        x=a;
    }
    if(x+y==z){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x1,y1,x2,y2,x3,y3;
    int flag=0;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,-1,0,1};
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if(Anon(x1,y1,x2,y2,x3,y3)){
        printf("RIGHT\n");
    }
    else{
        for(int i=0;i<4;i++){
            if(Anon(x1+dx[i],y1+dy[i],x2,y2,x3,y3)){
                printf("ALMOST\n");
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(int i=0;i<4;i++){
                if(Anon(x1,y1,x2+dx[i],y2+dy[i],x3,y3)){
                    printf("ALMOST\n");
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            for(int i=0;i<4;i++){
                if(Anon(x1,y1,x2,y2,x3+dx[i],y3+dy[i])){
                    printf("ALMOST\n");
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            printf("NEITHER\n");
        }
    }
    return 0;
}   