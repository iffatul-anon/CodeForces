#include<stdio.h>
#include<math.h>
int main(){
int n,npow,n1,n2,n3;

scanf("%d",&n);

npow=pow(5,n);

n1=npow%10;
n2=npow/10;
n3=n2%10;

printf("%d%d\n",n3,n1);
  
return 0;
}