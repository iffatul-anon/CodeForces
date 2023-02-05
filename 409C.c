#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    a[2]=a[2]/2;
    a[3]=a[3]/7;
    a[4]=a[4]/4;
    int min=a[0];
    for(int i=0;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d\n",min);
    return 0;
}