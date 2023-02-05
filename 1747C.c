#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a,x;
        int min=1000000000;
        scanf("%d",&x);
        for(int j=1;j<n;j++){
            scanf("%d",&a);
            if(min>a){
                min=a;
            }
        }
        if(x>min){
            printf("Alice\n");
        }
        else{
            printf("Bob\n");
        }
    }
    return 0;
}