#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    int a1[n],a2[n],a3[n];
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            a1[count1]=i+1;
            count1++;
        }
        if(a[i]==2){
            a2[count2]=i+1;
            count2++;
        }
        if(a[i]==3){
            a3[count3]=i+1;
            count3++;
        }
    }
    if(count1<=count2 && count1<=count3){
        printf("%d\n",count1);
        x=count1;

    }
    else if(count2<=count1 && count2<=count3){
        printf("%d\n",count2);
        x=count2;
    }
    else if(count3<=count1 && count3<=count2){
        printf("%d\n",count3);
        x=count3;
    }
    for(int i=0;i<x;i++){
        printf("%d %d %d\n",a1[i],a2[i],a3[i]);
    }
}