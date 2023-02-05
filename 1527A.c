#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int x=0;
        while(n>((pow(2,x)*2)-1)){
            x++;
        }
        printf("%.0f\n",pow(2,x)-1);
    }
    return 0;
}