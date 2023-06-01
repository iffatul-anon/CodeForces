#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    long long int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(max<a[i]){
            max=a[i];
        }
    }
    if(sum%2==0 && (sum/2)>=max){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}