#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
        char a;
        int flag=0;
        int mn=n*m;
        for(int i=1;i<=mn+10;i++){
            scanf("%c",&a);
            if(a=='C' || a=='M' || a=='Y'){
                flag=1;
            }
        }
        if(flag==1){
            printf("#Color\n");
        }
        else{
            printf("#Black&White\n");
        }
}