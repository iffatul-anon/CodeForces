#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
        char a;
        int flag=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                scanf("%c",&a);
                if(a=='C' || a=='M' || a=='Y'){
                    flag=1;
                }
            }
        }
        if(flag==1){
            printf("#Color\n");
        }
        else{
            printf("#Black&White\n");
        }

    
}