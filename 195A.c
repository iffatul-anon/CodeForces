#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a*c;
    float y=((1.0)*x/b);
    int z=ceil(y)-c;
    printf("%d\n",z);
    return 0;
}