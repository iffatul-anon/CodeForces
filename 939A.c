#include<stdio.h>
int main(){
    int n,x,y,z;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        x=a[i];
        y=a[x-1];
        z=a[y-1];
        if(z-1==i){
            flag=1;
        }
    }
    if(flag==1){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}