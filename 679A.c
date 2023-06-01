#include<stdio.h>
#include<string.h>
int main(){
    int a[19]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
    char s[5];
    int count=0;
    for(int i=0;i<19;i++){
        printf("%d\n",a[i]);
        fflush(stdout);
        scanf("%s",&s);
        if(strcmp(s,"yes")==0){
            count++;
        }
    }
    if(count>1){
        printf("composite\n");
    }
    else{
        printf("prime\n");
    }
    return 0;
}