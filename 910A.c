#include<stdio.h>
#include<string.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    char s[n+1];
    scanf("%s",&s);
    int x=0,y;
    int flag=0;
    int count=0;
    while(x<n-1){
        count++;
        y=x+d;
        if(y>=n){
            y=n-1;
        }
        flag=0;
        while(x<y){
            if(s[y]=='1'){
                x=y;
                flag=1;
                break;;
            }
            y--;
        }
        if(flag==0){
            printf("-1\n");
            return 0;
        }
    }
    printf("%d\n",count);
    return 0;
}