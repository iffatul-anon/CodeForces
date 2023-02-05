#include<stdio.h>
#include<string.h>
int main(){
    int n,q,l,r;
    scanf("%d %d",&n,&q);
    char s[n+1];
    int a[n];
    scanf("%s",&s);
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+(s[j]-96);
        a[j]=sum;
    }
    for(int i=0;i<q;i++){
        scanf("%d %d",&l,&r);
        if(l==1){
            printf("%d\n",a[r-1]);
        }
        else{
            printf("%d\n",a[r-1]-a[l-2]);
        }
    }
    return 0;
}