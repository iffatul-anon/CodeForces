#include<stdio.h>

int main(){
    int n,i,j,m1,m2,m3,m4;

    scanf("%d",&n);

    for(j=n+1;j<=9012;j++){
        i=j;

        m1=i%10;
        i=i/10;
        m2=i%10;
        i=i/10;
        m3=i%10;
        i=i/10;
        m4=i%10;

        if(m1!=m2 && m1!=m3 && m1!=m4 && m2!=m3 && m2!=m4 && m3!=m4){
        break;
        }
    }
    printf("%d\n",j);

    return 0;
}