#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        a[i]=-1;
        b[i]=-1;
    }
    for(int i=0;i<n;i++){
        char s[n+1];
        scanf("%s",&s);
        for(int j=0;j<n;j++){ 
            if(s[j]=='C'){
                a[i]++;
                b[j]++;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+((a[i]*(a[i]+1))/2)+((b[i]*(b[i]+1))/2);
    }
    printf("%lld\n",sum);
    return 0;
}