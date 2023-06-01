#include<stdio.h>
#include<math.h>
int main(){
int t,i,n,j,a,a1,b,c,aa;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d",&n);
        a1=0;
        aa=pow(10,7);
    for(j=1;j<=n;j++){
        scanf("%d",&a);
        a1 = a1+a;
        if(a<=aa){
            aa=a;
        }
    }
    b=aa*n;
    c=a1-b;
    printf("%d\n",c);

}
    return 0;
}