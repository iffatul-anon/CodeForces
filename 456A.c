#include<stdio.h>
int main(){
    int n,a,b,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a!=b){
           flag=1;
        }
    }
    if(flag==0){
        printf("Poor Alex\n");
    }
    else{
        printf("Happy Alex\n");
    }
    return 0;
}