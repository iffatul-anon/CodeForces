#include<stdio.h>
int main(){
    int n;
    float x,y,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%f %f",&x,&y);
        sum=sum+y;
    }
    printf("%f\n",5+(sum/n));
    return 0;
}