#include<stdio.h>
#include<string.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    char s[m][35];
    for(int i=0;i<m;i++){
        scanf("%s",&s[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=1;
    }
    int x=0;
    for(int i=0;i<m;i++){
        if(strcmp(s[i],"0")==0){
            continue;
        }
        for(int j=i+1;j<m;j++){
            if(strcmp(s[j],"0")==0){
                continue;
            }
            if(strcmp(s[i],s[j])==0){
                strcpy(s[j],"0");
                b[x]++;
            }
        }
        x++;
    }
    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
            if(b[i]<b[j]){
                int tem=b[i];
                b[i]=b[j];
                b[j]=tem;
            }
        }
    }
    int min=0,max=0;
    for(int i=0;i<x;i++){
        min=min+(b[i]*a[i]);
        max=max+(b[i]*a[n-i-1]);
    }
    printf("%d %d\n",min,max);
    return 0;
}