#include<stdio.h>
int main(){
    int n,a,count1=0,count2=0,count3=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==1){
            count1++;
        }
        if(a==2){
            count2++;
        }
        if(a==3){
            count3++;
        }
    }
    if(count1>=count2 && count1>=count3){
        printf("%d\n",n-count1);
    }
    else if(count2>=count1 && count2>=count3){
        printf("%d\n",n-count2);
    }
    else if(count3>=count1 && count3>=count1){
        printf("%d\n",n-count3);
    }
    return 0;
}