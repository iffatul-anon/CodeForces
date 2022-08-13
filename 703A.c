#include<stdio.h>
int main(){
    int n,m,c;
    scanf("%d",&n);
    int count1=0,count2=0;
    for(int  i=0;i<n;i++){
        scanf("%d %d",&m,&c);
        if(m>c){
            count1++;
        }
        else if(c>m){
            count2++;
        }
    }
    if(count1>count2){
        printf("Mishka\n");
    }
    else if(count1<count2){
        printf("Chris\n");
    }
    else if(count1==count2){
        printf("Friendship is magic!^^\n");
    }
}