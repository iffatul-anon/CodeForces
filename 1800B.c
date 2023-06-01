#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n,k;
        scanf("%lld %lld", &n,&k);
        char s[n + 1];
        scanf("%s", &s);
        long long int a[1000]={0};
        for(int i=0;i<n;i++){
            a[s[i]-64]++;
        }
        long long int count=0,count2=0;
        for(int i=1;i<27;i++){
            if(a[i]<a[i+32]){
                count=count+a[i];
                count2=count2+(a[i+32]-a[i])/2;
            }
            else {
                count=count+a[i+32];
                count2=count2+(a[i]-a[i+32])/2;

            }
        }
        if(k<count2){
            count=count+k;
        }
        else{
            count=count+count2;
        }
        printf("%lld\n",count);
    }
    return 0;
}