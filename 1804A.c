#include<stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(abs(a)==abs(b)){
            printf("%d\n",abs(a)+abs(b));
        }
        else if(abs(a)>abs(b)){
            printf("%d\n",(abs(a)*2)-1);
        }
        else if(abs(a)<abs(b)){
            printf("%d\n",(abs(b)*2)-1);
        }
    }
    return 0;
}