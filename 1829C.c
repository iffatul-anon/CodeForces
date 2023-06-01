#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int m,s,flag1=0,flag2=0,flag3=0,min1=2000000,min2=2000000,min3=2000000;
        for(int i=0;i<n;i++){
            scanf("%d %d",&m,&s);
            if(min1>m && s==10){
                flag1=1;
                min1=m;
            }
            if(min2>m && s==1){
                flag2=1;
                min2=m;
            }
            if(min3>m && s==11){
                flag3=1;
                min3=m;
            }
        }
        if(flag1==1 && flag2==1 && flag3==1){
            if(min1+min2>min3){
                printf("%d\n",min3);
            }
            else{
                printf("%d\n",min1+min2);
            }
        }
        else if(flag1==1 && flag2==1){
            printf("%d\n",min1+min2);
        }
        else if(flag3==1){
            printf("%d\n",min3);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}