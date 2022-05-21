#include<stdio.h>
int main(){
int n,a,b,c,i,sum,o=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum>=2){
        o=o+1;
    }

}
 printf("%d\n",o);

    return 0;
}