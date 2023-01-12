#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[1000000];
        scanf("%s",&s);
        int l=strlen(s);
        int a[l];
        for(int j=0;j<l;j++){
            a[j]=s[j]-96;
        }
        int x=a[0];
        int y=a[l-1];
        int m,n=0;
        int b[l];
        if(x>y){
            m=x-y;
            for(int j=0;j<=m;j++){
                for(int k=0;k<l;k++){
                    if(x==a[k]){
                        b[n]=k+1;
                        n++;
                        a[k]=-1;
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
                    if(x==a[k]){
                        b[n]=k+1;
                        n++;
                        a[k]=-1;
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