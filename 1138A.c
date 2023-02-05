#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count1=0,count2=0;
    int max=0;
    int flag=0,flag2=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count1++;
            flag=1;
        }
        if(a[i]==2){
            count2++;
            flag=2;
        }
        if(a[i]!=a[i+1]){
            flag2++;
            if(flag2!=1){
            if(count1<count2){
                if(max<count1){
                    max=count1;
                }
            }
            else{
                if(max<count2){
                    max=count2;
                }
            }
            if(flag==1){
                count2=0;
            }
            if(flag==2){
                count1=0;
            }
            }
        }
    }
    printf("%d\n",max*2);
    return 0;
}