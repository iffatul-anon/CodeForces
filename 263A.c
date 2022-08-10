#include<stdio.h>
int main (){
    int a[5][5];
    int i,j,i2,j2;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                i2=i;
                j2=j;
            }
        }
    }
    if(i2==2){
        i2=0;
    }
    else if(i2<2){
        i2=2-i2;
    }
    else if(i2>2){
        i2=i2-2;
    }
    if(j2==2){
        j2=0;
    }
    else if(j2<2){
        j2=2-j2;
    }
    else if(j2>2){
        j2=j2-2;
    }
    printf("%d\n",i2+j2);
    
    return 0;
}