#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[4],b[4];
    int x=0;
    char s[m+1];
    for(int i=0;i<n;i++){
        scanf("%s",&s);
        for(int j=0;j<m;j++){
            if(s[j]=='*'){
                a[x]=i+1;
                b[x]=j+1;
                x++;
            }
        }
    }
    int row,colum;
    if(a[0]==a[1]){
        row=a[2];
    }
    else if(a[0]==a[2]){
        row=a[1];
    }
    else if(a[1]==a[2]){
        row=a[0];
    }
    if(b[0]==b[1]){
        colum=b[2];
    }
    else if(b[0]==b[2]){
        colum=b[1];
    }
    else if(b[1]==b[2]){
        colum=b[0];
    }
    printf("%d %d\n",row,colum);
    return 0;
}