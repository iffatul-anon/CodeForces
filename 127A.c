#include<stdio.h>
#include<math.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int x1,y1,x2,y2;
    long double sum=0;
    scanf("%d %d",&x1,&y1);
    for(int i=1;i<n;i++){
        scanf("%d %d",&x2,&y2);
        float distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        sum=sum+distance;
        x1=x2;
        y1=y2;
    }
    printf("%Lf\n",(sum*k)/50);
    return 0;
}