#include<stdio.h>
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        int sub=0;
        if(a==b){
            printf("0\n");
        }
        else if(a<b){
            sub=b-a;
            if(sub%2==0){
                printf("2\n");
            }
            else{
                printf("1\n");
            }
        }
        else if(a>b){
            sub=a-b;
            if(sub%2==0){
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
    }
    return 0;
}