#include<stdio.h>
int main(){
int t,i,n,n1,n2;
scanf("%d",&t);
for(i=1;i<=t;i++){
    scanf("%d",&n);
    n1=0;
    n2=0;
    n1 += n%10;
    n=n/10;
    n1 += n%10;
    n=n/10;
    n1 += n%10;
    n=n/10;
    n2 += n%10;
    n=n/10;
    n2 += n%10;
    n=n/10;
    n2 += n%10;

    if(n1==n2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}
    return 0;
}