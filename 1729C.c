#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[1000000];
        scanf("%s",&s);
        int l=strlen(s);
        int x=s[0];
        int y=s[l-1];
        int m,n=0;
        int b[l];
        if(x>y){
            m=x-y;
            for(int j=0;j<=m;j++){
                for(int k=0;k<l;k++){
                    if(x==s[k]){
                        b[n]=k+1;
                        n++;
                        s[k]=-1;
                    }
                }
                x--;
                if(x<y){
                    break;
                }
            }
        }
        else{
            m=y-x;
            for(int j=0;j<=m;j++){
                for(int k=0;k<l;k++){
                    if(x==s[k]){
                        b[n]=k+1;
                        n++;
                        s[k]=-1;
                    }   
                }
                x++;
                if(x>y){
                    break;
                }
            }
        }
        printf("%d %d\n",m,n);
        for(int j=0;j<n;j++){
            printf("%d ",b[j]);
        }
        printf("\n");
    }
    return 0;
}