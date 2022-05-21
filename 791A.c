#include<stdio.h>
int main(){
int a,b,i;
scanf("%d %d",&a,&b);
for(i=1;i<=100;i++){
    a=a*3;
    b=b*2;
    if(a>b){
       printf("%d\n",i);
        break; 
    }
}
    return 0;
}