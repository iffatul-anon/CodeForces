#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        scanf("%d %d",&n,&k);
        int x=0,y=n;
        int count1=0,count2=(n*(n-1))/2,flag=0;
        while(x<=y){
            if(count1+count2==k){
                flag=1;
                break;
            }
            x++;
            y--;
            count1=(x*(x-1))/2;
            count2=(y*(y-1))/2;
        }
        if(flag==0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(int i=0;i<x;i++){
                printf("-1 ");
            }
            for(int i=0;i<y;i++){
                printf("1 ");
            }
            printf("\n");
        }
    }
    return 0;
}