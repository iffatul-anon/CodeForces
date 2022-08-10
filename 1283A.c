#include<stdio.h>
int main(){
  int t,i,h,m,h1,m1,m2,m3;
  scanf("%d",&t);
  for(i=1;i<=t;i++){
      scanf("%d %d",&h,&m);
      h1=24-(h+1);
      m1=60-m;
      m2=h1*60;
      m3=m1+m2;
      printf("%d\n",m3);
  }

    return 0;
}