#include<stdio.h>
int main(){
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    int kl=k*l;
    int toast=kl/nl;
    int pftoast1=toast/n;
    int cd=c*d;
    int toast2=cd;
    int pftoast2=toast2/n;
    int toast3=p/np;
    int pftoast3=toast3/n;
    if(pftoast1<=pftoast2 && pftoast1<=pftoast3){
        printf("%d\n",pftoast1);
    }
    else if(pftoast2<=pftoast1 && pftoast2<=pftoast3){
        printf("%d\n",pftoast2);
    }
    else if(pftoast3<=pftoast1 && pftoast3<=pftoast2){
        printf("%d\n",pftoast3);
    }
}