#include<stdio.h>
int main(){
    int n,x,y,count1=0,count2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x>0){
            count1++;
        }
        if(x<0){
            count2++;
        }
    }
    if(count1<=1 || count2<=1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}