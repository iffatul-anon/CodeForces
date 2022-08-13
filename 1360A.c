#include<stdio.h>
int main(){
    int t,a,b,area;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        if(a==b){
            area=(a+a)*(a+a);
            printf("%d\n",area);
        }
        else if(a>b && a<=(b+b)){
            area=(b+b)*(b+b);
            printf("%d\n",area);
        }
        else if(b>a && b<=(a+a)){
            area=(a+a)*(a+a);
            printf("%d\n",area);
        }
        else if(a>b){
            area=a*a;
            printf("%d\n",area);
        }
        else if(b>a){
            area=b*b;
            printf("%d\n",area);
        }
    }
   
}