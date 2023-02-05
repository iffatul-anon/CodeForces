#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[27];
    for(int i=0;i<27;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        char s[25];
        scanf("%s",&s);
        a[s[0]-96]++;
    }
    long long int sum=0;
    for(int i=1;i<27;i++){
        if(a[i]==0){
            continue;
        }
        else if(a[i]%2==0){
            int x=a[i]/2-1;
            sum=sum+((x*(x+1))/2)+((x*(x+1))/2);
        }
        else{
            int x=a[i]/2-1;
            sum=sum+(((x+1)*(x+2))/2)+((x*(x+1))/2);
        }
    }
    printf("%lld\n",sum);
    return 0;
}