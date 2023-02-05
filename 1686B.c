#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int p[n];
        for(int j=0;j<n;j++){
            scanf("%d",&p[j]);
        }
        int count=0;
        for(int j=0;j<n-1;j++){
            if(p[j]>p[j+1]){
                count++;
                j++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}