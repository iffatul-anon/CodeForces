#include<stdio.h>
#include<math.h>
int main(){

    int t,m,d=0,x=0,y=0,z;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d",&m);
       
       while(y<=m){
        y=pow(10,x);
        x++;
       }

       z=x-1;

       d=m-pow(10,z);
       printf("%d\n",d);

    }

    return 0;
}