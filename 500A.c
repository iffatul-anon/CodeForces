#include<stdio.h>
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    int i=0;
    while(i<n-1){
        if(i<t-1){
            i=i+a[i];
        }
        if(i>t-1){
            printf("NO\n");
            break;
        }
        else if(i==t-1){
            printf("YES\n");
            break;
        }
    }
    return 0;
}