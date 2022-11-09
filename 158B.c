#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            count1++;
        }
        if(a[i]==2){
            count2++;
        }
        if(a[i]==3){
            count3++;
        }
        if(a[i]==4){
            count4++;
        }
    }
    int sum4=count4;
    int sum3=count3;
    int sum2=0;
    int sum1=0;
    int sum=0;
    if(count1<=count3){
        count1=0;
    }
    else{
        count1=count1-count3;
    }
    if(count2%2==0){
        sum2=count2/2;
        count2=0;
    }
    else{
        sum2=count2/2;
        count2=1;
    }
    if(count1%4==0){
        sum1=count1/4;
        count1=0;
    }
    else{
        sum1=(count1/4);
        count1=count1%4;
    }
    if(count2==1 && count1<=2){
        sum=1;
    }
    else if(count2==1 && count1==3){
        sum=2;
    }
    else if(count2==0 && count1>0){
        sum=1;
    }
    sum=sum+sum1+sum2+sum3+sum4;
    printf("%d\n",sum);
    return 0;
}