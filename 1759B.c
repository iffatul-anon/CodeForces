#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int m,s;
        scanf("%d %d",&m,&s);
        int a;
        int max=0;
        int sum=0;
        for(int j=0;j<m;j++){
            scanf("%d",&a);
            if(max<a){
                max=a;
            }
            sum=sum+a;
        }
        int sum2=0;
        for(int j=1;j<=max;j++){
            sum2=sum2+j;
        }
        int x=sum2-sum;

        if(x==s){
            printf("YES\n");
        }
        else if(x>s){
            printf("NO\n");
        }
        else{
            int y=s-x;
            while(y>0){
                max++;
                y=y-max;
            }
            if(y==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}