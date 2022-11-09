#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",&s);
        long long int x=0,y=0;
        long long int max0=0,max1=0;
        long long int count0=0,count1=0;
        for(int j=0;j<n;j++){
            if(s[j]=='0'){
                x++;
                count0++;
                count1=0;
            }
            else{
                y++;
                count1++;
                count0=0;
            }
            if(max0<count0){
                max0=count0;
            }
            if(max1<count1){
                max1=count1;
            }
        }
        if(x==0){
            printf("%lld\n",y*y);
        }
        else if(y==0){
            printf("%lld\n",x*x);
        }
        else{
            long long int max=x*y;
            max0=max0*max0;
            max1=max1*max1;
            if(max>=max0 && max>=max1){
                printf("%lld\n",max);
            }
            else if(max0>=max && max0>=max1){
                printf("%lld\n",max0);
            }
            else if(max1>=max && max1>=max0){
                printf("%lld\n",max1);
            }
        }
    }
    return 0;
}