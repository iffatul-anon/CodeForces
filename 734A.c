#include<stdio.h>
int main(){
    int n,count1=0,count2=0;
    scanf("%d",&n);
    char c;
    for(int i=0;i<=n;i++){
        scanf("%c",&c);
        if(c=='A'){
            count1++;
        }
        else if(c=='D'){
            count2++;
        }
    }
    
    if(count1>count2){
        printf("Anton\n");
    }
    else if(count1<count2){
        printf("Danik\n");
    }
    else if(count1==count2){
        printf("Friendship\n");
    }

    return 0;
}