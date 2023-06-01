#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int x1,x2,x3,y1,y2,y3;
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        scanf("%d %d",&x3,&y3);
        if(y1==y2){
            if(y3>y1){
                printf("0\n");
            }
            else{
                printf("%.10f\n",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
            }
        }
        else if(y1==y3){
            if(y2>y1){
                printf("0\n");
            }
            else{
                printf("%.10f\n",sqrt(pow(x1-x3,2)+pow(y1-y3,2)));
            }
        }
        else if(y2==y3){
            if(y1>y2){
                printf("0\n");
            }
            else{
                printf("%.10f\n",sqrt(pow(x2-x3,2)+pow(y2-y3,2)));
            }
        }
        else{
            printf("0\n");
        }

    }
    return 0;
}