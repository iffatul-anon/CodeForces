#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int n;
    scanf("%d",&n);
    long double min=1000000000;
    for(int i=0;i<n;i++){
        int c,d,v;
        scanf("%d %d %d",&c,&d,&v);
        long double s=sqrt(pow((a-c),2)+pow((b-d),2));
        long double t=s/v;
        if(min>t){
            min=t;
        }
    }
    printf("%Lf\n",min);
    return 0;
}