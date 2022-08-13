#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a,count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            if(a>1){
                count=count+(a-1);
            }
        }
        if(count%2!=0){
            printf("errorgorn\n");
        }
        else{
            printf("maomao90\n");
        }
    }
    return 0;
}