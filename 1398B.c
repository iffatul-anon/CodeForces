#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char s[101];
    for(int i=0;i<t;i++){
        scanf("%s",&s);
        int l=strlen(s);
        int count=0;
        int a[l];
        int x=0;
        for(int j=0;j<l;j++){
            if(s[j]=='1'){
                count++;
            }
            else{
                a[x]=count;
                x++;
                count=0;
            }
            if(j==l-1){
                a[x]=count;
                x++;
            }
        }
        for(int j=0;j<x;j++){
            for(int k=j+1;k<x;k++){
                if(a[j]<a[k]){
                    int tem=a[j];
                    a[j]=a[k];
                    a[k]=tem;   
                }
            }
        }
        int sum=0;
        for(int j=0;j<x;j=j+2){
            sum=sum+a[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}