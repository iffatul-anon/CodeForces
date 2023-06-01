#include<stdio.h>
int main(){
	int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int min1=1000000000,min2=1000000000,flag=0;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(x%2==0){
                if(min1>x){
                    min1=x;
                }
            }
            else{
                flag++;
                if(min2>x){
                    min2=x;
                }
            }
        }
        if(flag==0 || flag==n || min1>min2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}