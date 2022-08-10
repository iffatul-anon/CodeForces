#include<stdio.h>

int main(){
    int n,count=0;
    char s1[4];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",&s1);
        if(s1[1]=='+'){
            count++;
        }
        if(s1[1]=='-'){
            count--;
        }
    }

    printf("%d\n",count);


    return 0;
}