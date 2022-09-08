#include<stdio.h>
int main(){
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n];
    int b[n];
    int flag=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            flag=1;
        }
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    if(a[0]==0){
        printf("NO\n");
    }
    else if(flag==0){
        printf("YES\n");
    }
    else if (a[0]==1 && a[s-1]==1){
        printf("YES\n");
    }
    else{
        int count=0;
        for(int i=n-1;i>s-1;i--){
            if(a[i]==1 && b[i]==1 && b[s-1]==1){
                count=1;
                break;
            }
        }
        if(count==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}