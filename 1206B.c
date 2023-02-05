#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int count1=0,count2=0,count3=0;
    long long int sum1=0,sum2=0;
    for(int j=0;j<n;j++){
        scanf("%d",&a);
        if(a<0){
            count1++;
            sum1=sum1+a+1;
        }
        else if(a>0){
            count2++;
            sum2=sum2+a-1;
        }
        else{
            count3++;
        }
    }
    long long int anon=-sum1+sum2+count3;
    if(count1%2!=0 && count3==0){
        anon=anon+2;
    }
    printf("%lld\n",anon);
    return 0;
}