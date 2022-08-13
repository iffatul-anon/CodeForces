#include<stdio.h>
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                count++;   
                break;
            }
        }
    }
    printf("%d\n",count);
}