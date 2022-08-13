#include<stdio.h>
#include<string.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int m;
        for(int j=0;j<n;j++){
            scanf("%d",&m);
            char s[m+1];
            scanf("%s",&s);
            int count=0;
            for(int k=0;k<m;k++){
                if(s[k]=='U'){
                    count--;
                }
                else{
                    count++;
                }
            }
            a[j]=a[j]+count;
            if(a[j]>9){
                a[j]=a[j]-10;
            }
            else if(a[j]<0){
                a[j]=10+a[j];
            }
        }
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    return 0;
}