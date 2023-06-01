#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0){
                count1++;
            }
            else{
                count2++;
            }
            
        }
        if(count1==0){
            printf("\nYES\n");
            printf("1 2 3");
        }
        else if(count1==1 && count2==2){
            printf("\nNO");
        }
        else if(count2==0){
            printf("\nNO");
        }
        else if(count2>=3){
            int x=0;
            printf("\nYES\n");
            for(int i=0;i<n;i++){
                if(a[i]%2!=0){
                    printf("%d ",i+1);
                    x++;
                }
                if(x==3){
                    break;
                }
                
            }
        }
        else{
            int x=0,y=0;
            printf("\nYES\n");
            for(int i=0;i<n;i++){
                if(a[i]%2==0 && x<2){
                    printf("%d ",i+1);
                    x++;
                }
                else if(a[i]%2!=0 && y==0){
                    printf("%d ",i+1);
                    y++;
                }
                if(x+y==3){
                    break;
                }
            }
        }
    }
    return 0;
}