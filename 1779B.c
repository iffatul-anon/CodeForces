#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==0){
            printf("YES\n");
            for(int j=0;j<n;j++){
                int a=pow(-1,j+1);
                printf("%d ",a);
            }
            printf("\n");
        }
        else if(n==3){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            int x=n/2;
            for(int j=0;j<n;j++){
                if(j%2==0){
                    printf("%d ",-(x-1));
                }
                else{
                    printf("%d ",x);
                }
            }
            printf("\n");
        }
    }
    return 0;
}