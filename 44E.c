#include<stdio.h>
#include<string.h>
int main(){
    int k,a,b;
    scanf("%d %d %d",&k,&a,&b);
    char s[201];
    scanf("%s",&s);
    int l=strlen(s);
    int x,y;
    if(l%k==0){
        x=l/k;
        if(x<a || x>b){
            printf("No solution\n");
        }
        else{
            for(int i=0;i<l;i=i+x){
                for(int j=i;j<x+i;j++){
                    printf("%c",s[j]);
                }
                printf("\n");
            }
        }
    }
    else{
        x=l/k;
        y=l%k;
        if(x<a || x>=b){
            printf("No solution\n");
        }
        else{
            for(int i=0;i<l;i=i+x){
                int j;
                for(j=i;j<x+i;j++){
                    printf("%c",s[j]);
                }
                if(y>0){
                    printf("%c",s[j]);
                    y--;
                    i++;
                }
                printf("\n");
            }
        }
    }
    return 0;
}