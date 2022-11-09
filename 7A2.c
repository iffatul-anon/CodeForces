#include<stdio.h>
int main(){
    char c;
    int count=0,count2=0,count3=0;
    for(int i=0;i<8;i++){
        count=0;
        for(int j=0;j<8;j++){
            scanf("%c",&c);
            if(c=='B'){
                count++;
            }
        }
        if(count==8){
            count2++;
        }
        else{
            count3=count;
        }
    }
    if(count3==0){
        printf("%d\n",count2);
    }
    else{
        printf("%d\n",count3+count2);
    }
    return 0;
}