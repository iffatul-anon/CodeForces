#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,count1=0,count2=0;
        scanf("%d",&n);
        char r[n+1],b[n+1];
        scanf("%s %s",r,b);
        for(int i=0;i<n;i++){
            if(r[i]>b[i]){
                count1++;
            }
            else if(r[i]<b[i]){
                count2++;
            }
        }
        if(count1>count2){
            printf("RED\n");
        }
        else if(count1<count2){
            printf("BLUE\n");
        }
        else{
            printf("EQUAL\n");
        }
    }
    return 0;
}