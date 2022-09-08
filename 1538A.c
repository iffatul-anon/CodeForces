#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        int max=1,x=1;
        int min=100,y=1;
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
            if(max<a[j]){
                max=a[j];
                x=j+1;
            }
            if(min>a[j]){
                min=a[j];
                y=j+1;
            }
        }
        int a1,a2,a3;
        if(x>y){
            a1=x;
            a2=(n-y)+1;
            a3=((n-x)+1)+y;
            if(a1<=a2 && a1<=a3){
                printf("%d\n",a1);
            }
            else if(a2<=a1 && a2<=a3){
                printf("%d\n",a2);
            }
            else if(a3<=a1 && a3<=a2){
                printf("%d\n",a3);
            }
        }
        else if(y>x){
            a1=y;
            a2=(n-x)+1;
            a3=((n-y)+1)+x;
             if(a1<=a2 && a1<=a3){
                printf("%d\n",a1);
            }
            else if(a2<=a1 && a2<=a3){
                printf("%d\n",a2);
            }
            else if(a3<=a1 && a3<=a2){
                printf("%d\n",a3);
            }
        }
    }
}