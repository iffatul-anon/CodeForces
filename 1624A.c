#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a;
        int max=0;
        int min=1000000000;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(max<a){
                max=a;
            }
            if(min>a){
                min=a;
            }
        }
        printf("%d\n",max-min);
    }
 
   
}